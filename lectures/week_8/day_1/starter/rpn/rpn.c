#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include "token.h"

 /* This function reads tokens from the stdin till the user inputs EOF or the quit command.
        * If the token is a literal, push the value on the stack.
        * If the token is an operator, pop values from the stack and perform the operation. Push the result on the stack.
        * If the token is 'p', pop and print a value from the stack.
        * If the token is 'q', stop reading the tokens.
     */
int main() {
   Token tok;
   IStack* s = makeStack();
   int goOn  = 1;
   while (goOn && readToken(&tok) != 0) {
      switch(tok.type) {
         /* TODO: complete the following operations as explained in the pdf and above */
         case LIT: /* Fill this in. */
         case '+': /* Fill this in. */
         case '*': /* Fill this in. */
         case '-': /* Fill this in. */
         case '/': /* Fill this in. */            
         case 'p': /* Fill this in. */          
         case 'q': goOn = 0; break;
      }
   }
   freeStack(s);
   return 0;
}

