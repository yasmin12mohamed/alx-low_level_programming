#include "main.h"
/**
 * *_strcat - *_strcat block
 *
 * Description:concatenates two strings.
 * @dest:parameter to be verified
 * @src:parameter to be verified
 *
 * Return: pointer to the result string
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
