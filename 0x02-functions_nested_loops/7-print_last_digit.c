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
	int e;
	e = r % 10;

	_putchar(e);
	return (e);
}
