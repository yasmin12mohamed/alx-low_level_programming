#include "main.h"
/**
 * print_rev - print_rev block
 *
 * Description: prints a string, in reverse, followed by a new line
 * @s:parameter to be verified
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int x, y, rev;

	x = 0;
	rev = x;
	
	while (s[x] != '\0')
	{
		x++;
	}
	for (y = rev - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
