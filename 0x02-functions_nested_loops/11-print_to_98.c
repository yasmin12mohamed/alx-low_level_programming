#include "main.h"
/**
 * print_to_98 - print_to_98 block
 *
 * Description:prints all natural numbers from n to 98
 * @n:parameter to be verified
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
