#include "main.h"
/**
 * *_strncpy - *_strncpy block
 *
 * Description:copies a string.
 * @dest:destination
 * @src:string source
 * @n:number of bytes
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;

	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
