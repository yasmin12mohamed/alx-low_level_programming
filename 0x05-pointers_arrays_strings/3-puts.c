#include "main.h"
/**
 * _puts - _puts block
 *
 * Description:prints a string, followed by a new line
 * @str:parameter to be verified
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int x;

	x = 0;

	while (x != '\0')
	{
		x++;
	}
	_putchar(str[x]);
	_putchar('\n');
}
