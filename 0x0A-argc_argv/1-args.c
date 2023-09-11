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
	int x = 0;
	(void)*argv;

	for (x = 0; x < argc; x++)
	{
		printf("%d\n", x - 1);
	}

	return (0);
}
