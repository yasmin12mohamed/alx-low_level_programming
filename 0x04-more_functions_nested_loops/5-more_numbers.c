#include "main.h"
/**
 * more_numbers - more_numbers block
 *
 * Description:prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int count = 0;
	int x;

	while (count < 10)
	{
		for (x = 0; x < 14; x++)
		{
			if (x >= 10)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
		count++;
	}
}
