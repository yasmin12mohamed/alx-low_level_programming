#include "main.h"
#include <stddef.h>
/**
 * *_strstr - *_strstr block
 *
 * Description: function that locates a substring
 * @needle: string we search for
 * @haystack: string we search in
 *
 * Return: NULL or pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (NULL);
}
