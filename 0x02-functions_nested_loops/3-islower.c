#include "main.h"
/**
 * _islower - the function to check the character
 *
 * Description:checks for lowercase character
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
