#include <stdio.h>

int main(void)
{
	int a, *pointer_int;

	a = 27;
	pointer_int = &a;

	printf("content of pointer int: %d\n", *pointer_int);

	*pointer_int = 30;

	printf("updated content of a: %d", a); 
}
