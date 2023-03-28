#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;
	int *pointer_char;

	c = 'A';

	/* typecast pointer */
	pointer_char= (int *)&c;
	/*assign new value to pointer*/
	pointer_char = 66;


	printf("updated value of c: %d", c);
	return (0);

}
