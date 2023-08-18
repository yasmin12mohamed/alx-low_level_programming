#include "main.h"
/*
 * times_table - times_table block
 *
 * Description:prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
	int j, l, r;

	for (j = 0; j <= 9; j++)
	{
		for (l = 0; j <= 9; j++)
		{
			r = j * l;
			if (j != 0)
			{
				putchar(',');
				putchar(' ');
			}
			if (r >= 10)
			{
				putchar((r / 10) + '0');
				putchar((r % 10) + '0');	
			}
			else if (r < 10 && j != 0)
			{
				putchar(' ');
				putchar((r % 10) + '0');
			}
			else
				putchar((r % 10) + '0');
		}
		putchar('\n');
	}
}
