#include <stdio.h>

int test(int x);

int main(void)
{
	int x,y;

	printf("Enter a number: ");
	scanf("%d", &x);
	y = test(x);
	switch (y)
	{
		case -1: 
			printf("The integer: %d is negative\n",x);
			break;
		case 0: 
			printf("The integer: %d is %d\n", x, x);
			break;
		case 1: 
			printf("The integer: %d is positive\n", x);
			break;
		default:
			printf("Invalid number\n");

	}
		
}

int test(int i)
{
	int sign;

	if (i < 0)
		sign = -1;

	else if (i == 0)

		sign = 0;
	else
		sign = 1;

	return (sign);
}

