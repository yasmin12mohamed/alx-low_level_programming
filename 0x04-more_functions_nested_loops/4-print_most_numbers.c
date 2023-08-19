#include "main.h"
/**
 * print_most_numbers - print_most_numbers block
 *
 * Description:prints the numbers, from 0 to 9 except 2 & 4
 *
 * Return nothing
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}
}
