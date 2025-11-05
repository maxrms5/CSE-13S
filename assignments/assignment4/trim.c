#include <stdio.h>

void trim(char s[]) {
   int i = 0; // current index
   int end_index = 0; // last non-whitespace character index in array

   while (1) {
      char curr_char = *(s + i); // dereferencing pointer to s[i]
      if (curr_char <= 0) break; // null char, end of str
      if (curr_char != ' ' && curr_char != '\t' && curr_char != '\n' && curr_char != '\r') {
         if (end_index < i) end_index = i; // updates with highest index of a non-whitespace char
      }
      i++;
   }

   int j = i; // total length of string
   while (j > end_index) {
      *(s + j) = 0; // sets trailing whitespaces to null, dereferencing pointer to s[j]
      j--;
   }
}

int main() {
   char str[100];  // Assuming max input length of 100 characters
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);  // Read input including spaces
   printf("Input string: [%s]\n", str);
   trim(str);  // Call the function to trim trailing spaces
   printf("Trimmed string: [%s]\n", str);

   return 0;
}
