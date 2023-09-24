#include "main.h"
/**
 * puts_half - puts_half block
 *
 * Description:prints half of a string
 * @str:parameter to be verified
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int word, n, x;

	word = 0;

	while (str[word] != '\0')
	{
		word++;
	}

	if (word % 2 == 0)
	{
		for (x = word / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
	else if (word % 2)
	{
		for (n = (word - 1) / 2; n < word - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
