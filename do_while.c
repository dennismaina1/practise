#include <stdio.h>

int main(void)
{
	int i=10;
	char c;
	do {
		c= i+'0';
		printf("The character is: %c\n", c);
		i++;
	}while(i<=20);

	return(0);
}

