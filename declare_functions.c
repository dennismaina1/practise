#include <stdio.h>

/* function declaration */
int add(int i, int j);

/* main function */ 
int main()
{
	int x;
	int y;

	printf("Enter the first number:\n");
	scanf("%d", &x);
	printf("Enter the second number:\n");
	scanf("%d", &y);
	printf("The sum is: %d\n", add(x, y));
	return (0);	
}

/* function definition */
int add(int i, int y)
{
	return(i+y);
}
