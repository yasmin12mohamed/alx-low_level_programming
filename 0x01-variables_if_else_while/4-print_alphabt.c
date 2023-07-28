#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print alphabets in lowercases except e and q by putchar
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for ( c = 'a'; c <= z ; c++)
	{
		if (c != e , c != q)
		putchar(c);
	}
	putchar('\n');
	return 0;
}
