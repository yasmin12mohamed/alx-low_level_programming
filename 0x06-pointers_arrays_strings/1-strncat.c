#include "main.h"
/**
 * *_strncat - *_strncat block
 *
 * Description:concatenates two strings
 * @dest:destination
 * @src:string source
 * @n:number of bytes
 * 
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
