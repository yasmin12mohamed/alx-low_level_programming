#include <stdio.h>
#include "main.h"
/**
 * main - main block
 *
 * Description:fezz buzz test
 *
 * Return:0
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0)
		{
			printf("Fizz");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((k % 3 == 0) && (k % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (k == 1)
		{
			printf("%d", k);
		}
		else
		{
			printf(" %d", k);
		}
		Printf("\n");
	}
	return (0);
}

