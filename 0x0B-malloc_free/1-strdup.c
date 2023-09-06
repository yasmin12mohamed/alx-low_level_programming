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
	char *dup;
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
	dup = malloc(sizeof(chatr) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}
	else
	{
		while ((dup[i] == str[i]) != '\0')
		{
			return (ptr);
		}
	}
}
