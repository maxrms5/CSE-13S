/* Getting the frequency of leading digits */

#include <stdio.h>

int getMSDigit(int x) {
   for (int i=0; i<=(sizeof(x)/4); i++) {
      x = x % 10;
   }
   return x;
}

int main() {
   int num;
   int digits[2][10] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };

   while (scanf("%d", &num) == 1) {
      getMSDigit(num);
      digits[1][num]++;
   }
   
   for (int i=0; i<=9; i++) printf("%d:%d ", digits[0][i], digits[1][i]);

   return 0;
}
