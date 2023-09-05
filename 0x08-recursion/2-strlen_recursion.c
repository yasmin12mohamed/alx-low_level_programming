#include "main.h"
/**
 * _strlen_recursion - _strlen_recursion block
 *
 * Description:returns the length of a string
 * @s: string to determine the length of
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (s + _strlen_recursion(s + 1));
}
