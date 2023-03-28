#include <stdio.h>

/*prototype*/
double pow(double x, double y);
double sqrt(double x);

int main(void)
{

	double w,x,y,z;

	 x = 2;
	 y = 3;
	 z = 9;
	 w = -2;

	printf("The square of 2 is: %2.0f\n", pow(x, x));
	printf("2 exponential 3 is: %2.0f\n", pow(x, y));
	printf("2 exponential -2 is: %2.6f\n",pow(x, w));
	printf("squareroot of 9 is: %2.0f\n", sqrt(z));

	return (0);
}
double pow(double x, double y)
{
	double base, exponent, power;
	int i;

	base = x;
	power = 1;
	exponent = y;
       
	if (exponent == 0)
		power = 1;

	else if (exponent == 1)
		power *= base;

	else if (exponent > 1)
	{
		for (;exponent > 0; exponent--)
			power *= base;  
	}
	else if (exponent < 0)
	{
		base = 1 / base;
		exponent = -1 * exponent;
		for (i=1; i <= exponent; i++)
		       power *= base; 	
	}

	return (power);

}

double sqrt(double x)
{
	double temp,square_root, number;

	number = x;
	square_root = number / 2;
	temp = 0;
	temp = square_root;
	square_root = ( number/temp + temp) / 2;

	return (square_root);
}

