#include <stdio.h>

int main(void)
{
	/* 2 dim array */
	int i,j;

	int array[][2] = {1,2,3,4,5,6,7,8,9,10};

	for (i = 0; array[i]; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%3d", array[i][j]);
		putchar('\n');
	}
	return (0);
}
