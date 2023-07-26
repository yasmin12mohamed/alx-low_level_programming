#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 *
 * Description: Determine if the last digit of a number is is greater than 5 or equal to 0 or less than 6 and greater than 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n%10) > 5)
		printf("Last digit of %d is %d and is greater than 5");
	elseif ((n%10) < 6 && !=0)
		printf("Last digit of %d is %d and is less than 6 and not 0");
	else 
		printf("Last digit od %d is %d and is 0");
	return (0);
}
