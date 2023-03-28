#include <stdio.h>

int main(void)
{
	char array[5];
	int i,j,k;

	for (i = 0, j = 'a'; j < 'f'; i++, j++)
		array[i] = j;

	for (k = 0; array[k]; k++)
		printf("%c\n",array[k]);
	return (0);
}
