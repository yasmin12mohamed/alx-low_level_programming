#include "main.h"
/**
 * print_times_table - print_times_table block
 *
 * Description: print time tables from 0 to 15
 * @n: number to print time table of
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, result;
	
	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
