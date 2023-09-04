#include "main.h"
/**
 * _puts_recursion - _puts_recursion block
 *
 * Description: prints a string, followed by a new line.
 * @s: the string to be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		return;
	}
	_puts_recursion(s + 1);
}
