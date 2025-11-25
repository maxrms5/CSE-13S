/* Macros are not really functions */

//#include <stdio.h>

#define SQUARE(a) ((a) * (a))   // what if a is random?
             //x    //((++x) * (++x)) // (7*7) = 49
             //    ((rand()) * (rand())) 

int main() {
    int x = 5;
    int result;

    //printf("Initial x = %d\n", x);  //5

    result = SQUARE(++x);           //SQUARE(6) = 36
             //SQUARE(rand())

   // printf("After SQUARE(++x):\n");
   // printf("result = %d\n", result); 
   // printf("Final x = %d\n", x);     

    return 0;
}