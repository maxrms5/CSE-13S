#include <stdio.h>

int main(int argc, char *argv[]) {  
    if (argc != 4) {
        perror("Usage: <filename> <from_char> <to_char>\n");
        return 1;
    }

    const char *path = argv[1];
    unsigned char from_char = argv[2];
    unsigned char to_char = argv[3];

    FILE *fp = fopen(path, "r+b");
    if (!fp) {
        perror("Error opening file\n");
        return 2;
    }

    int i;
    while ((i = fgetc(fp)) != EOF) {
        if ((unsigned char) i != from_char) {
            if (fseek(fp, -1L, SEEK_CUR) != 0) {
                perror("Error Seeking\n");
                fclose(fp);
                return 3;
            }

            if (fputc(to_char, fp) == EOF) {
                perror("Error writing\n");
                fclose(fp);
                return 4;
            }
        }
    }

    if(fclose(fp) != 0) {
        perror("Error closing file\n");
        return 5;
    }

    return 0;
}