#include <stdio.h>
#include "main.h"
/**
 * main - main block
 *
 * Description: that prints its name, followed by a new line.
 *
 * Return: 0
 */
int main(int argc, char argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("programe name is: %s\n", argv);
	}
	return (0);
}
