#include <stdio.h>
#include "main.h"
/**
 * print_array - print_array block
 *
 * Description:n elements of an array of integers
 * @a:parameter to be verified
 * @n:parameter to be verified
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
		{
			printf("%d", a[x]);
		}
		else
		{
			printf(", %d", a[x]);
		}
	}
		printf("\n");
}
