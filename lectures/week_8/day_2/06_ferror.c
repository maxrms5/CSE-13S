#include <stdio.h>
#include <stdlib.h>

int main(){

   FILE *fp;
   fp = fopen("test.txt","w");
   char ch = fgetc(fp);  // Trying to read data, from writable file
   if(ferror(fp)){
      printf("File is opened in writing mode! You cannot read data from it!\n");
      exit(1);
   }
   fclose(fp);
   
   return 0;
}