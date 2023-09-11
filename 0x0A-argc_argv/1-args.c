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
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("number of arguments is: %d\n", argc);
	}
	return (0);
}
