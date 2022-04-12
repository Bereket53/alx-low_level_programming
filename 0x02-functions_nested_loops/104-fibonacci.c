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
			printf("%lf", floor( j));
		else if (i == 1)
			printf(", %lf", floor(k));
		else
		{
			k += j;
			j = k - j;
			printf(", %lf", floor(k));
		}

		++i;
	}

	printf("\n");
	return (0);
}
