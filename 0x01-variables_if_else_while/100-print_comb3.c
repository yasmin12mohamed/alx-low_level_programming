#include <stdio.h>
/**
 * main - main block
 *
 * Description: program that prints combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 8; n++)
	{
		for (m = 1; m <= 9; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
