#include <stdio.h>
/**
 * main - main block
 *
 * Description: program that prints combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != 8 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
