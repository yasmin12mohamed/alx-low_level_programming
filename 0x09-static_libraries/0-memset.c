#include "main.h"
/**
 * *_memset -  *_memset block
 *
 * Description:fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}

	return (s);
}
