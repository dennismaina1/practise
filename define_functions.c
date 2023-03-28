#include <stdio.h>

/* int addd(int i, int y); */

/* add function*/
int addd(int i ,int y)
{
	return(i+y);
}

/* main function*/
int main(void)
{
	int x;
	int y;
	
	printf("Enter 1st number: ");
	scanf("%i", &x);
	printf("Enter 2nd number: ");
	scanf("%i", &y);

	printf("The sum is : %d", addd(x, y));
	return (0);
}
