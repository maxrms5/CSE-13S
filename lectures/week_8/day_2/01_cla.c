/* Using command line arguments */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {  //char**
    if (argc < 3) {
        printf("Usage: %s <your_name> <age> \n", argv[0]);
        return 1;
    }

    printf("Hello, %s! Your age is %d. \n", argv[1], atoi(argv[2]));
    return 0;
}
