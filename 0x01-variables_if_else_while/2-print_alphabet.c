#include <stdio.h>
/**
 * main - main block
 *
 * Description: print the alphabet in lowercase by putchar function
 *
 * Return: 0
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
