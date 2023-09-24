#include "main.h"
/**
 * reverse_array - reverse_array block
 *
 * Description:reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
