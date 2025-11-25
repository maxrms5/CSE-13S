#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(){

   FILE *fp;
   fp = fopen("test.txt","w");
   char ch = fgetc(fp);  // Trying to read data, from writable file
   if(ferror(fp)){
      printf("Error code: %d  Error message: %s\n", errno, strerror(errno));
   }
   fclose(fp);
   
   return 0;
}