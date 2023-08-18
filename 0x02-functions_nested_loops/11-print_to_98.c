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
	while (n <= 98)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
