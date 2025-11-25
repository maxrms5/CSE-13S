/* Introducing if-else statements */

#include <stdio.h>

int main() {
  int num1, num2;
  printf("Enter two values: ");
  scanf("%d %d", &num1, &num2);

  if(num1 < num2) {
    printf("num1 is smaller.\n");
  } else if(num1 > num2){
    printf("num2 is smaller.\n");
  } else printf("The numbers are equal.\n");
  
  return 0;
}
