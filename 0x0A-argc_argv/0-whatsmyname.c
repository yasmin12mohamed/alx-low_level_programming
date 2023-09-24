#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Description: that prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
