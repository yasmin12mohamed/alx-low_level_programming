#include "main.h"
/**
 * *cap_string - *cap_string block
 *
 * Description:capitalizes all words of a string.
 * @s:string to be tested
 *
 * Return: the result
 */
char *cap_string(char *s)
{
	int k, x;

	char shape[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (k = 0; s[k] != '\0'; k++)
	{
		if (k == 0 && s[k] >= 'a' && s[k] <= 'z')
			s[k] -= 32;

		for (x = 0; x < 13; x++)
		{
			if (s[k] == spe[x])
			{
				if (s[k + 1] >= 'a' && s[k + 1] <= 'z')
				{
					s[k + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
