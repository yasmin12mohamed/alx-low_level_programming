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
	char S[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(S[i]);
	}
	_putchar(10);
	return (0);
}
