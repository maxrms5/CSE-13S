/* Using fseek to access a file */

#include <stdio.h>

int main(int argc, char *argv[]) {  //argv[0] = name of the executable, //argv[1] = 10; //
    FILE *file = fopen("example.txt", "w+");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fputs("Hello, World!\n", file);

    fseek(file, 0, SEEK_SET);  
    char buffer[50];
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}
