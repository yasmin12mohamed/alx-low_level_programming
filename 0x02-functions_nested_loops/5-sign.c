#include "main.h"
/**
 * print_sign - print_sign block
 *
 * Description: prints the sign of a number
 * @n: parameter to be verified
 *
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putcar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
