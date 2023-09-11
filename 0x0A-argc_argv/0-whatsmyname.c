#include <stdio.h>
#include "main.h"
/**
 * main - main block
 *
 * Description: that prints its name, followed by a new line.
 *
 * Return: nothing
 */
void main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		_putchar(argv);
		_putchar('\n');
	}
}
