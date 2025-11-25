/* Determine the output of the following printf statements */

#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "The sky is the limit.";

    printf("%s\n", str); 
    
    printf("%20.10s\n", str);   //width; precision

    for(int i=0; str[i]!='.';i++)
        printf("%c", str[i]);
    printf("\n");              

    for(int i=0; i<=strlen(str);i++) {
        printf("%s\n", str+i);  //str = &str[0]; str+i = &str[i] 
    }                           
    
    return 0;
}