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

	for (n = 48; n <= 55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (x = 50; x <= 57; x++)
			{
				if (n > m || x > m)
				{
					putchar(n);
					putchar(m);
					putchar(x);
					if (m != 56 || x != 57)
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
}
