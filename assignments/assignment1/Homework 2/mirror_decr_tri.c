/* Implement an inverted mirrored triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

* * * * *
  * * * *
    * * *
      * *
        *  

*/

#include <stdio.h>

int main() {
  int n;
  printf("Enter n (number of rows): ");
  scanf("%d", &n);

  for (int i=n; i>=1; i--) {
    for (int j=1; j<=(n-i); j++) {
      printf("  ");
    }
    for (int k=1; k<=i; k++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}