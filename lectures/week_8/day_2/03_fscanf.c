/* Using fscanf and fprintf */

#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(file, "%d %f %s\n", 42, 3.14, "Hello");     //formatted IO
    fclose(file);

    int num;
    float decimal;
    char word[20];

    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fscanf(file, "%d %f %s", &num, &decimal, word);     //formatted IO
    printf("Read from file: %d, %.2f, %s\n", num, decimal, word);

    fclose(file);
    return 0;
}
