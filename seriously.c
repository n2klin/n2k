#include <limits.h>

#include "seriously.h"

int get_rich(int *c)
{
	int i; 
	
	printf("Weird *c: %d\n", *c);

	if (*c * MULTIPLY_WITH <= INT_MAX )
	      	i = *c * MULTIPLY_WITH;
	else 
		i = INT_MAX;
	
	printf("Weird INT_MAX: %d\n", INT_MAX);

	return i;
}

int main (int argc, char **argv)
{
	int c;
	
	printf("Seriously, no code?! Choose a number: ");
	scanf("%d", &c);
	if (c < 2000000000) {
		printf("Poor guy! %d? Really?!\n", c);
		// get the man rich 
		int new;
		new = get_rich(&c); 
		printf("How kind am I! You got promoted to this: %d!\n", new);
	}
	else
		printf("Hmmm... %d! I like!\n", c);

	return 0;
}
