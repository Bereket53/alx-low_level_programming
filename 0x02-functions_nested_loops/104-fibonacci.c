#include <stdio.h>

/**
  * main - Prints the first 100 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	unsigned float j = 1, k = 2;

	while (i < 100)
	{
		if (i == 0)
			printf("%fd", j);
		else if (i == 1)
			printf(", %fd", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %fd", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
