#include <stdio.h>
#include <math.h>

/**
  * main - Prints the first 100 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;

	long double j = 1, k = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%.f", floor( j));
		else if (i == 1)
			printf(", %.f", floor(k));
		else
		{
			k += j;
			j = k - j;
			printf(", %.f", floor(k));
		}

		++i;
	}

	printf("\n");
	return (0);
}
