/* Pointers in C - value that denotes the address of a memory cell 
 * What can you do with pointers - get addr of something, deference an addr to get a value, compute the address of something 
 * & operator - address of operator gets the address of a variable 
 * * operator - deferencing operator accesses the value at a given address */

#include <stdio.h>

int main() {
	int x = 10;
	printf("The value of x is: %d\n", x);
	
	int *px = &x; /* px is a pointer to an int i.e. it contains an address of an int variable */
	*px = 20; /* follow the pointer px and update the value it points to i.e. updates the value of x from 10 to 20 */
	
	printf("Value of x is: %d\n", x);
	printf("Address of x is: %p\n", px);
	printf("The value of x is: %d\n", *px);
	printf("The next address is: %p\n", px+1);	//what happens when you compute px+1?

	char c = 'c';
	char *cp = &c;
	printf("Address of c is: %p\n", cp);
	printf("Address of c+1 is: %p\n", cp+1);
	return 0;
}
