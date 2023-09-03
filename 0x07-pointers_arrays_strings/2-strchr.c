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
	char str[];
	*s = str;
	int index = 0;

	while (*s != c)
	{
		++s;
		++index;
	}
	if (*s == c)
	{
		return (c);
	}
	else 
	{
		return (NULL);
	}
}	
