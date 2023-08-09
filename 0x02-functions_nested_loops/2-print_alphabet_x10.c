#include "main.h"
/**
 * print_alphabet_x10 - the function to print alphabets
 *
 * Description:prints 10 times the alphabet, in lowercase
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	char c;
	int count;

	while (count <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
