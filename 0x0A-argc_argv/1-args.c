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
	printf("number of arguments is: %d\n", argc);

	if (argc > 2)
	{
		printf("argv: %s\n", argv[0]);
	}
	return (0);
}
