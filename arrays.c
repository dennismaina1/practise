#include <stdio.h>

int main(void)
{
	/* intializing arrays  method 1*/
	int char_array[6];
	char array[5] = {'M','A','I','N','A'};
	int i,j;

	char_array[0]='D';		
	char_array[1]='E';		
	char_array[2]='N';		
	char_array[3]='N';		
	char_array[4]='I';
	char_array[5]='S';

	for (i = 0; i <= sizeof(char_array[6])+1; i++)
		printf("%c",char_array[i]);

	putchar('\n');

	/* initializing arrays method 2*/

	for (j = 0; j < 6; j++)
		printf("%c", array[j]);

	putchar('\n');

	printf("%s\n",array);

	printf("array size of array Dennis is %lu\n", sizeof(char_array)); 
	printf("array size of array Maina is %lu\n", sizeof(array)); 

	return (0);	
}

