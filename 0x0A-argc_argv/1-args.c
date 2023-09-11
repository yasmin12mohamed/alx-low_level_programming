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
	printf("argc is: %d\n", argc - 1);
	int x;

	for (x = 0; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
