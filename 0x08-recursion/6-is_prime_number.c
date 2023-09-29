#include "main.h"
/**
 * _prime - _prime block
 *
 * Description: determine if number is prime number
 * @n: the number to be tested
 * @i: parameter
 * Return: 0 or 1
 */
int _prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (_prime(n, (i - 1)));
}

/**
 * is_prime_number - is_prime_number block
 *
 * Description: returns 1 if the input integer is a prime number
 *@n: number ro be tested
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}
