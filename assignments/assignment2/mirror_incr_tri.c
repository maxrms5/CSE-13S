/* Implement a mirrored increasing triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

        *
      * *
    * * *
  * * * *
* * * * *

*/

#include<stdio.h>

int main() {
  int n;
  printf("Enter n (number of rows): ");
  scanf("%d", &n);

  for (int i=1; i<=n; i++) {
    for (int j=n; j>i; j--) {
      printf("  ");
    }
    for (int k=1; k<=i; k++) {
      printf("* ");
    }
    printf("\n");
  }
  
  return 0;
}
