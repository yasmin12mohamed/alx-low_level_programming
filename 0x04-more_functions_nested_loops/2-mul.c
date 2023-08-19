#include "main.h"
/**
 * mul - mul block
 *
 * Description:function that multiplies two integers.
 * @a:parameter to be verified
 * @b:parameter to be verified
 *
 * Return:the result of mutiplication
 */
int mul(int a, int b)
{
	int multi;

	multi = a * b;
	_putchar(multi + '0');
	return (multi);
}
