#include <stdio.h>

int main (int argc, char **argv)
{
	int c;
	
	printf("Seriously, no code?! Choose a number: ");
	scanf("%d", &c);
	if (c < 100000)
		printf("Poor guy! %d? Really?!\n", c);
	else
		printf("Hmmm... %d! I like!\n");

	return 0;
}
