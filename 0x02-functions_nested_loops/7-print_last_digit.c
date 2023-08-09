#include "main.h"
/**
 * print_last_digit - print_last_digit block
 *
 * Description: prints the last digit of a number
 * @r: parameter to be verified
 *
 * Return: 0
 */
int print_last_digit(int r)
{
	num = r % 10;

	if (num < 0)
	{
		num = num * -1;
		_putchar(num + '0');
	}
	return (num);
}
