#include "main.h"
/**
 * swap_int - swap_int block
 *
 * Description:swaps the values of two integers
 * @a:parameter to be verified
 * @b:parameter to be verified
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
