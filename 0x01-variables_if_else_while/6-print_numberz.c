#include <stdio.h>
/**
 * main - main block
 *
 * Description:print numbers with putchar function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}

