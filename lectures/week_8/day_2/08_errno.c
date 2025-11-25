#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {

   FILE* fp;

   // opening a file which does not exist
   fp = fopen("nosuchfile.txt", "r");
   printf("Error code: %d\n", errno);
   perror("Error message:");
   
   return 0;
}