/* Increment and decrement operators */
#include <stdio.h>

int main() {
  int num = 5, result;
  printf("Initial value of num: %d\n\n", num);

  //increments
  printf("Pre-increment (++num;): num = %d\n", ++num);  //what is num = ?
  printf("Post-increment (num++;): num = %d\n", num++); //what is num = ?

  //decrements
  printf("Pre-decrement (--num;): num = %d\n", --num);  //what is num = ?
  printf("Post-decrement (num--;): num = %d\n\n", num--); //what is num = ?

  num = 5; // Reset num
  result = ++num * 2;
  printf("Pre-increment in expression (result = ++num * 2;): num = %d, result = %d\n", num, result); //what is num = ?

  num = 5; // Reset num
  result = num++ * 2;
  printf("Post-increment in expression (result = num++ * 2;): num = %d, result = %d\n", num, result); //what is num = ?

  num = 5; // Reset num
  result = --num * 2;
  printf("Pre-decrement in expression (result = --num * 2;): num = %d, result = %d\n", num, result); //what is num = ?

  num = 5; // Reset num
  result = num-- * 2;
  printf("Post-decrement in expression (result = num-- * 2;): num = %d, result = %d\n", num, result); //what is num = ?
  return 0;
}