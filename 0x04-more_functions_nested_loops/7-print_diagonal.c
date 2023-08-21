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

		for (x = 1; x <= n; x++)
		{
			_putchar('\');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
