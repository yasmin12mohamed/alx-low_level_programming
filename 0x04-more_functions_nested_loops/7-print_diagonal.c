#include "main.h"
/**
 * print_diagonal - print_diagonal block
 *
 * Description:draws a diagonal line on the terminal
 * @n: parameter to be verified
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int space;

		for (x = 1; x <= n; x++)
		{
			for (space = 1; space <= n; space++)
			{
				if (space == x)
				{
					_putchar(92);
				}
				else if (space < x)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
