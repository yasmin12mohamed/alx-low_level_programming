#include "main.h"
/**
 * puts2 - puts2 block
 *
 * Description:prints every other character of a string
 * @str:parameter to be verified
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int word, x;

	word = 0;

	while (str[word] != '\0')
	{
		word++;
	}

	for (x = 0; x < word; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
