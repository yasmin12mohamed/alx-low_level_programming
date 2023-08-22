#include "main.h"
/**
 * *_strcpy - *_strcpy block
 *
 * Description:copy string test
 * @dest:parameter to be verified
 * @src:parameter to be verified
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int word, x;

	word = 0;

	while (src[word] != '\0')
	{
		word++;
	}

	for (x = 0; x < word; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
