#include "main.h"
/**
 * print_to_98 - print_to_98 block
 *
 * Description:prints all natural numbers from n to 98
 * @n:parameter to be verified
 *
 * Return: (0)
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	for (n = n; n > 98; n--)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
}
