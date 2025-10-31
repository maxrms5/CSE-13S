/* Getting the frequency of leading digits */

#include <stdio.h>

int getMSDigit(int x) {

   int msd = 0; 

   while (x != 0) {
      msd = x % 10;    
      x /= 10;  
   }
   return msd;
}

int main() {
   int num;
   int digits[2][10] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };

   while (scanf("%d", &num) == 1) {
      int sig = getMSDigit(num);
      digits[1][sig] += 1;
   }
   
   for (int i=0; i<=9; i++) printf("%d:%d ", digits[0][i], digits[1][i]);

   return 0;
}
