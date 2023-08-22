#include "main.h"
/**
 * print_triangle - prints a triangle block
 *
 * Description:  prints a triangle, followed by a new line.
 * @size: parameter to be verified
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, column;

		for (row = 1; row <= size; row++)
		{
			for (column = i; column < size; column++)
			{
				_putchar(' ');
			}

			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
