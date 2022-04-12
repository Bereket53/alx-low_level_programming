#include <stdio.h>

/**
  * main - Prints the first 100 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void) 
{
	int first_no = 0;
	int second_no = 1;
	int next_no;
	int i;
	
	for ( i = 0 ; i < 100 ; i++ )
	{
		if ( i <= 1 )
			next_no = i;
		else
		{
			next_no = first_no + second_no;
			first_no = second_no;
			second_no = next_no;
			if(next_no > 100) {
				break;
			}
		}
		printf("%d  ",next_no);
	}

  return 0;
}
