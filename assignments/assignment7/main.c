#include "string2.h"
#include <stdio.h>

int main(void) {
    /* ───────── strlen checks ───────── */
    strlen((const char *)NULL); // NULL string
    strlen("�xxxxxx"); //starts with garbage
    strlen(""); // empty string
    strlen("hello\0"); // ends in NULL
    strlen("a"); // len(str) == 1
    strlen("hola"); // even str len
    strlen("hello"); // odd str len
    strlen("reijnijninvierbnnervjbnieriuevwiubnefvinjjnajononijbvi"); // len > 50
    strlen("hello\n"); // has newline
    strlen("hel\tlo"); // escape char inside

    /* ───────── strstr checks ───────── */
    char str1[10] = "hello"; 
    strstr(NULL, "abc"); // NULL haystack
    strstr(str1, ""); // empty needle
    strstr(str1, "needle"); // needle > haystack
    strstr(str1, "h"); // beginning char, one char
    strstr(str1, "ell"); // middle char
    strstr(str1, "o"); // end char
    strstr(str1, "air"); // needle not in haystack
    

    /* ───────── strncpy checks ───────── */
    char dest1[10] = "xxxxxxxx";  
    char dest2[10]; 
    strncpy(dest1, "cat", 10); // trunc
    strncpy(dest2, "Hello", 3); // padding
    strncpy(dest2, "", 10); // src is empty
    strncpy(dest2, "dog", 0); // n = 0
    strncpy(dest2, "hello", 1); // n = 1
    strncpy(dest2, "hello", 5); // len(src) == n
    strncpy(dest2, "\n", 5); // src newline
    strncpy(NULL, "abc", 5); // NULL destination
    
    /* ───────── strcmp checks ───────── */
    strcmp(NULL, "abc"); // NULL string
    strcmp("", "abc"); // s1 is emtpy 
    strcmp("abc", ""); // s2 is empty
    strcmp("", ""); // both empty strings
    strcmp("abc", "abc"); // equal strings
    strcmp("abc", "1bc"); // diff first char
    strcmp("abc", "a2c"); // diff mid char
    strcmp("abc", "ab3"); // diff last char

    return 0;
}