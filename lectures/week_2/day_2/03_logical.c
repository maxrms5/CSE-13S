/* Logical operators */
#include <stdio.h>

int main() {
  int num1, num2, num3, highest;

  printf("Enter three integer values: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if ((num1 >= num2) && (num1 >= num3)) {
    highest = num1;
  } else if (num2 >= num1 && num2 >= num3) {
    highest = num2;
  } else {
    highest = num3;
  }

  printf("The highest value is: %d\n", highest);

  // Can you re-write the above computation using the conditional operator?

  /* Can you write logical expressions that test whether a given character c is
     1) lowercase
     2) uppercase
     3) white space
  */

  return 0;
}