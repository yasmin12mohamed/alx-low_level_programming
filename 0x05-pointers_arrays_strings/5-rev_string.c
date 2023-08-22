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
	char string = s[0];
	int count = 0;
	int x;

	while (s[count] != '\0')
	{
		count++;
	}
	for (x = 0; x < count; x++)
	{
		count--;
		string = s[x];
		s[x] = s[count];
		s[count] = string;
	}
