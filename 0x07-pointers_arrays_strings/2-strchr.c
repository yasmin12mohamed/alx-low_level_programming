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
char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
