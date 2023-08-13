#include "main.h"
/**
 * print_last_digit - print_last_digit block
 *
 * Description: prints the last digit of a number
 * @i: number to determine the last digit of
 *
 * Return: the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * (-1);
	}
	_putchar('0' + (i % 10));
	return (i % 10);
}
