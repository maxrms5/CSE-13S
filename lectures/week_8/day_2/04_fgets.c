/* Using fgets and fputs */

#include <stdio.h>

int main() {
    FILE *file = fopen("text.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fputs("Hello, World!\nThis is a test.\n", file);
    fclose(file);

    char buffer[50];

    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}
