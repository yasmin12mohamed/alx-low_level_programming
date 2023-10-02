#include "main.h"
/**
 * _islower -  _islower block
 *
 * Description: checks for lowercase character.
 * @c: parameter to be verified
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
