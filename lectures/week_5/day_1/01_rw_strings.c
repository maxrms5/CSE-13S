/* Reading and writing strings in C */

#include <stdio.h>

int main() {
    char city[30];

    /* Using printf and scanf */
    printf("Name your favourite city: ");
    scanf("%s", &city[0]);      //change this to %[^\n] and see what happens
    printf("Your favorite city is: %s\n", city);

    //scanf("%[^\n]", &city[0]);  
    //printf("Your favorite city is: %s\n", city);

    /* Using getchar and putchar */
    /*int i=0;
    do {
        city[i] = getchar();
        putchar(city[i]);
    } while(city[i++] != '\n');
    city[i] = '\0';
    */

    /* Using gets and puts */ 
    //gets(city);
    //puts(city);
   
    return 0;
}