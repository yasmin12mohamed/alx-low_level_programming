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
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[x] = srcy[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
