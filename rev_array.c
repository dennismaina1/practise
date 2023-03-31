#include <stdio.h>

void reverse_array(int *a, int n);


void print_array(int *a, int n)
{
	    int i;
    	    i = 0;
	    while (i < n)
	    {
		    if (i != 0)
		    {
			    printf(", ");
		    }
		    printf("%d", a[i]);
		    i++;
	    }
	    printf("\n");
}
int main(void)
{
	    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	        print_array(a, sizeof(a) / sizeof(int));
		    reverse_array(a, sizeof(a) / sizeof(int));
		        print_array(a, sizeof(a) / sizeof(int));
			    return (0);
}
void reverse_array(int *a, int n)
{
	int i , j, k;
	int c[n];

	for (i = n-1,j = 0; i >= 0;j++, i--)
	{
		c[j] = a[i]; 
		
	}
	for (k = 0; k <= n-1; k++)
		a[k] = c[k];
	    	
}
