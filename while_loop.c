#include <stdio.h>

int main(void)
{
	char c;

	printf("Enter a character or press x to exit: ");
	while (c != 'x')
	{
		c = getchar();
		putchar(c);
	}
	printf("\n you have gotten out of loop");
	return(0);
}
