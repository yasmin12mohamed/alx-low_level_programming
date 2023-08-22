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

	for (x = 0; str[x] != '\0'; x++)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
