#include "main.h"
/**
 * print_last_digit - print_last_digit block
 *
 * Description: prints the last digit of a number
 * @i: parameter to be verified
 *
 * Return: the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
