#include "main.h"
/**
 * print_last_digit - print_last_digit block
 *
 * Description: prints the last digit of a number
 * @n: number to determine the last digit of
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
	{
		r *= -1;
	}
	_putchar (r + '0');
	return (r);
}
