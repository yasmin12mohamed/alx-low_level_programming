#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main block
 *
 * Description: prints the number of arguments passed into it.
 * @argc: number of counts
 * @argv: the arguments
 *
 * Return: (1) or (0)
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int x;

		for (x = 0; x < argc; x++)
		{
			if (isdigit(*argv[x]))
			{
				int sum = 0;

				sum = sum + atoi(argv[x]);
				printf("%d\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
