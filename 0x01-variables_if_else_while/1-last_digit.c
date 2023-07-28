#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 *
 * Description: program determine if the last degit of number is greater than 5 or equal to 0 or less than 6 and not 0
 *
 * Return: 0*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int last_digit;
	last_digit = n%10;
	if(last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}
	elseif (last_digit < 6 && !=0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n ,last_digit);
	}
	else
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}
	return (0);
}
