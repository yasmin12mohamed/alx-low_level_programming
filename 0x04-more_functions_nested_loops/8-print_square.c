#include "main.h"
/**
 * print_square - print_square block
 *
 * Description:prints a square, followed by a new line
 * @size: parameter to be verified
 *
 * Return: nothing
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int column, row;

		for (row = 1; row <= size; size++)
		{
			for (column = 1; column <= size; size++)
			{
			_putchar('\n');
			}
		}
	}
}
