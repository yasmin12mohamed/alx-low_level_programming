#include "main.h"
#include <stdlib.h>
/**
 * *create_array - *create_array block
 *
 * Description: creates an array of chars,initializes it with specific char
 * @size: array size
 * @c: specific char
 * Return: NULL or pointer of array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char*)malloc(size * sizeof(char));

	if (ptr == 0 || size <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}
