/* Using fgetc and fputc */

#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fputc('A', file);
    fputc('B', file);
    fputc('C', file);
    fputc('\n', file);

    fclose(file);

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;   //exit(1)
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
