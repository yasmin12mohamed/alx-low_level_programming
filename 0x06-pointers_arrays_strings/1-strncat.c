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
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[y] = '\0';
	return (dest);
}
