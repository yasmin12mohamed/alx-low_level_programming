#include <stdio.h>
/**
 * main - main block
 *
 * Description: prints the number of arguments passed into it.
 * @argc: number of counts
 * @argv: the arguments
 *
 * Return: (0)
 */
int main(int argc, char *arg[])
{
	if (argc > 0)
	{
		printf("argc: %d\n", argc - 1);
	}
	return (0);
}
