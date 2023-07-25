#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main -  main block
 *
 * Description:determine if number negative or positive
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0){
		printf(n, "is positive");
	}elseif(n<0){
		printf(n, "is negative");
	}else(n=0){
		printf(n, "is zero");
	}
	return (0);
}
