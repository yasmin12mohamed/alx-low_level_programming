#include "main.h"
/**
 * main - main block
 *
 * Description:print '_putchar'
 *
 * Return: 0
 */
int main(void)
{
	char S[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(S[i]);
	}
	_putchar('\n');
	return (0);
}
