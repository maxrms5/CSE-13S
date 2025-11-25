/* using realloc */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main() {
    char *buffer;
    if((buffer = (char*)malloc(13*sizeof(char))) == NULL) {
        printf("Malloc failed!\n");
        exit(1); //return 1
    } 
    strcpy(buffer, "New York, NY");
    printf("Buffer contains: %s\n", buffer);

    if((buffer = (char*)realloc(buffer, 15 * sizeof(char))) == NULL) {
        printf("Realloc failed!\n");
        exit(1);
    } 
    strcpy(buffer, "SANTA CRUZ, CA");
    printf("Buffer contains: %s\n", buffer);

    free(buffer);
    return 0;
}