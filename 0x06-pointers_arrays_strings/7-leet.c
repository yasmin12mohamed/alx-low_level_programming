#include "main.h"
/**
 * *leet - *leet block
 *
 * Description:unction that encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: the result
 */
char *leet(char *s)
{
	int k, h;

	char *a = "aAeEoOtTlL";
	char *b = "443300771";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (h = 0; h < 10; h++)
		{
			if (s[k] == a[h])
			{
				s[k] = b[h];
			}
		}
	}

	return (s);
}
