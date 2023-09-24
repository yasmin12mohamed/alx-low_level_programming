#include <stdio.h>
/**
 * main - main block
 *
 * Description: program that prints combinations of three-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int n, m, x;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			for (x = 50; x <= 57; x++)
			{
				if (x > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(x);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
