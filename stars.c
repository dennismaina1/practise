#include <stdio.h>

int main(void)
{
	int i;
	int j;
	char c='*';

	for ( i=0 ; i<11 ; i++ )
	{
		for ( j=0 ; j<i ; j++ )
		{
			printf("%5c",c);
		};
		printf("%-5c\n",c);
	}
	return(0);
}
