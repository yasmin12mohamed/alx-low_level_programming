#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print numbers separated bty space and comma
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		putchar(' ');
		if (num < 9)
		{
			putchar(',');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
