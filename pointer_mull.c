#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/* declare variables and pointers */
	int x, *pntr_x;
	int y, *pntr_y;
	int mul;

	/* assign values to variables */
	x = 5;
	y = 6;

	/* assign memory location of variables to pointer variables */
	pntr_x = &x;
	pntr_y = &y;

	/* work on values using pointers */
	mul = (*pntr_x) * (*pntr_y);
	printf("%d", mul);
	return (0);
}

