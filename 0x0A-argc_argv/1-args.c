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
	int x;
	printf("%d\n", argc);

	for (x = 0, x < argc, x++)
	{
		printf(" argv %d is %s\n", x + 1, argv[x]);
	}
	return (0);
}
