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
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, x, y, result;

		for (i = 0; i < argc; i++)
		{
			result = x * y;
			printf("%s\n", argv[result]);
		}
	}
	return (0);
}
