/* Declaraing primitive types in C */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {
  // characters in C
  char ch1, ch2;                          // variable declaration
  printf("Enter two characters: ");
  scanf("%c %c", &ch1, &ch2);             // reading values from user for variable assignment
  
  if (ch1 < ch2) { 
      printf("'%c' has an ASCII value of %d, which is lower than the ASCII value of '%c' that is %d.\n", ch1, ch1, ch2, ch2);
  } else if (ch1 > ch2) {
      printf("'%c' has an ASCII value of %d, which is greater than the ASCII value of '%c' that is %d.\n", ch1, ch1, ch2, ch2);
  } else {
      printf("'%c' and '%c' have the same ASCII value, which is %d. The next character is %c with an ASCII value of %d\n", ch1, ch2, ch2, ch2+1, ch2+1);
  }

  // integers and floats in C
  int period = 10, year = 0;    //variable declaration and initialization
  double amount = 5000.00, rate = 0.11;  
  
  printf("period and year have a size of %ld bytes and amount and rate have a size of %ld bytes.\n", sizeof(int), sizeof(double));

  while(year <= period) {
    printf("%2d\t%8.2lf\n", year, amount);    //specifying the width and precision of the values
    amount = amount + rate * amount;
    year = year+1;
  }

  // what about booleans in C?
  printf("The value of TRUE and TRUE is %d\n", TRUE && TRUE);
  
  return 0;
}