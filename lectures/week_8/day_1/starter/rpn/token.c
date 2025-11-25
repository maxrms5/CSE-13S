#include "token.h"
#include <ctype.h>
#include <stdio.h>

/* This function parses the token t to assign values to t->type and t->value fields.
	* If the char is a whitespace, it skips it. Note there could be multiple whitespaces bunched together. It skips over all of them. 
	* If the char is a digit, it reads all digits of the number, converts it to int and stores the type and value. 
	* If the char is an operator like '+', '-' or EOF, etc, it assigns the type field. 
 * Returns 1 if char is not EOF. Else returns 0 */

int readToken(Token *t) {
   char ch;
   while (isspace(ch = getchar())); // skip whitespaces
   if (isdigit(ch)) { // we have a number, read it!
      int v = 0;
      while (isdigit(ch)) {
         v *= 10;
         v += ch - '0';
         ch = getchar();
      }
      t->type = LIT;
      t->value = v;
      return 1; // we got a literal.
   } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' ||
              ch == 'p' || ch == 'q' || ch == EOF)
      t->type = ch;  
   return ch != EOF;
}
