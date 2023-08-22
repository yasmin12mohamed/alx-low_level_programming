#include "main.h"
/**
 * _strlen - _strlen block
 *
 * Description:returns the length of a string.
 * @s:parameter to be verified
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
