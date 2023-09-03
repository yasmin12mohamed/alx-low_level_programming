#include "main.h"
/**
 * _strspn -  _strspn block
 *
 * Description: gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, seg;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		seg = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				seg = 1;
			}
		}
		if (seg == 0)
		{
			return (z);
		}
	}

	return (0);
}
