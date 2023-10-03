#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main block
 *
 * Dwscription:Write a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vecctor arrray
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		int x;

		for (x = 1; x < argc; x++)
		{
			if (isdigit(*argv[x]) != 0)
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
	return (0);
}
