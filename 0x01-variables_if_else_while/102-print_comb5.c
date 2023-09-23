#include <stdio>
/**
 * main - main block
 *
 * Description:prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = x; y < 100; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x != 99 && y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
