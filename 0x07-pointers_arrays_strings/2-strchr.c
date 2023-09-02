#include "main.h"
/**
 * *_strchr - *_strchr block
 *
 * Description: locates a character in a string
 * @c: the character searched for
 * @s: the string we search in
 *
 * Return: NULL or c
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
