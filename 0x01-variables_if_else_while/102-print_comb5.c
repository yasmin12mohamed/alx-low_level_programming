#include <stdio.h>
/**
 * main - main block
 *
 * Description:prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
#include <stdio.h>

int main() 
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return 0;
}
