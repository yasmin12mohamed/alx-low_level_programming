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
	int num;

	for (num = 0 ; num <10 ; num++)
	{
		putchar(num + '0');
		putchar(' ');
		putchar(',');
	}
	putchar('\n');
	retuen (0);
}
