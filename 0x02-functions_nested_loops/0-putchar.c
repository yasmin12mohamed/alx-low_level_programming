#include "main.h"
/**
 * main - main block
 *
 * Description:program that prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char d[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i ++)
		_putchar(d[i]);
		_putchar('\n');
	return (0);
}
