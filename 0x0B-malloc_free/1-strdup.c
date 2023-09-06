#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - *_strdup block
 *
 * Description:  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len;
	
	i =0;
	len = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[len])
		{
		len++;
		}
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while ((ptr[i] == str[i]) != '\0')
		{
			return (ptr);
		}
	}
}
