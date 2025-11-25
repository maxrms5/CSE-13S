#ifndef __TOKEN_H
#define __TOKEN_H

#define LIT 0

typedef struct Token {
   char type;  // LIT,+,*,-,/,p,q
   int value; // value of the literal
} Token;

int readToken(Token *t);

#endif
