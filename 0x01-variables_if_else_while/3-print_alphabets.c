#include <stdio.h>
/**
 * main - main block
 *
 * Description:Print alphabet in upper and lowercases by putchar function
 *
 * Return: 0
 */
int main(void)
{
	char c, C;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (C = 'A' ; C <= 'Z' ; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}


