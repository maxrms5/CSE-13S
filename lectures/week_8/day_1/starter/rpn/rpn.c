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
         case LIT:
            pushStack(s, tok.value);
            break;
         case '+': 
            pushStack(s, popStack(s) + popStack(s));
            break;
         case '*': 
            pushStack(s, popStack(s) * popStack(s));
            break;
         case '-': 
            int v1, v2;
            v1 = popStack(s);
            v2 = popStack(s);
            pushStack(s, v2 - v1);
            break;
         case '/': 
            int v3, v4;
            v1 = popStack(s);
            if (v1 == 0) {
               perror("Error! Division by 0.\n");
               break;
            }
            v2 = popStack(s);
            pushStack(s, v2 / v1);
            break;          
         case 'p': 
            int value = popStack(s);
            printf("%d\n", value);
            break;
         case 'q': goOn = 0; break;
      }
   }
   freeStack(s);
   return 0;
}

