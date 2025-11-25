/* Arithmetic expressions */

#include <stdio.h>

int main() {
  //Arithmetic expressions
  float ans = 10.0 + 2.0 / 3.0 - 2.0 * 2.0;
  printf("The value of ans = %f\n", ans);
  // modify the above expression so that the answer is 11.0


  // modify the above expression so that the answer is 6.0


  // Implicit Type Conversion
  int integer_num = 5;
  float float_num = 2.5;
  double result_implicit;

  result_implicit = integer_num + float_num; // integer_num is implicitly converted to float
  printf("Implicit Type Conversion:\n");
  printf("integer_num = %d, float_num = %.1f\n", integer_num, float_num);
  printf("integer_num + float_num = %.1f (integer converted to float)\n\n", result_implicit);

  // Expressions: Explicit Type Conversion (Type Casting)
  int int_value = 15;
  float float_result;
  float_result = (float)int_value / 2;

  printf("Explicit Type Conversion (Type Casting):\n");
  printf("int_value = %d\n", int_value);
  printf("(float)int_value / 2 = %.1f (integer explicitly cast to float for division)\n\n", float_result);

  return 0;
}