#include "main.h"
/**
 * _sqrt - _sqrt block
 *
 * Description: find the natural square root of a number
 * @n: number to calculate the square root of
 * @x: the variable
 *
 * Return: -1 or the result
 */
int _sqrt(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion -  _sqrt_recursion block
 *
 * Description: returns the natural square root of a number.
 * @n: number to find the square root of
 *
 * Return: -1 or the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
