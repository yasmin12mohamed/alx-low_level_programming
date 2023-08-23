#include "main.h"
/**
 * *leet - *leet block
 *
 * Description:unction that encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: the result
 */
har *leet(char *s)
{
	int x, y;

	char w1[] = "aAeEoOtTlL";
	char w2[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == w1[y])
			{
				s[x] = w2[y];
			}
		}
	}

	return (s);
}
