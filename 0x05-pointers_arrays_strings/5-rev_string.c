#include "main.h"
/**
 * rev_string - rev_string block
 *
 * Description:reverses a string.
 * @s:parameter to be verified
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char str;
	int x, words, words1;

	words = 0;
	words1 = 0;

	while (s[words] != '\0')
	{
		words++;
	}

	words1 = words - 1;

	for (x = 0; x < words / 2; words++)
	{
		str = s[x];
		s[x] = s[words1];
		s[words1--] = str;
