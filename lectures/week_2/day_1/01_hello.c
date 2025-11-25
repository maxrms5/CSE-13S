/* Writing my first C program */

/* this is a
 * multi-line
 * comment */

//single-line comments

#include <stdio.h>
int main(int argc, char* argv[]) {      //the execution starts at main - user-defined function
    printf("Hello world\n");              //calling the library function printf

    //printf("argc = %d\n", argc);
    //printf("The arg is %s\n", argv[0]);
    //printf("The arg is %s\n", argv[1]);
    //printf("The arg is %s\n", argv[2]);

    return 0;                           //must be the last line in a function
}
