#include "main.h"
/**
 * factorial - factorial block
 *
 * Description:returns the factorial of a given number.
 * @n:number to find factorial of
 *
 * Return: -1 or the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int result;

		result = n * factorial(n - 1);
		return (result);
	}
}
