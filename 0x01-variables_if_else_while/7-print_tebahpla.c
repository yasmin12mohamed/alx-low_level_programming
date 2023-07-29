#include <stdio.h>
/**
 * main - main block
 *
 * Description: print alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
