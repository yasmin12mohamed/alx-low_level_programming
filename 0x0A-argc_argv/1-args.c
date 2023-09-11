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

	if (argc == 1)
	{
		printf("argc is: %d\n", argc);
	}
	else
	{
		for (x = 2; x < argc; x++)
		{
			printf("argc is: %d\n", x);
		}
	}
	return (0);
}
