#include "main.h"
/**
 * *_memcpy - *_memcpy block
 *
 * DEscription: copies memory area
 * @dest: memory to copy to
 * @n: bytes to be copied
 * @src: memory to copey of
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
