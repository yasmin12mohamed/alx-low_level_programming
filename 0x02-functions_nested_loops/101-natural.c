#include <stdio.h>
/**
 * main - main block
 *
 * Description:computes and prints sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int x, sum;
	sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			sum = sum + x;
			printf("%d", sum)
		}
	}
	putchar('\n');
	return (0);
}
