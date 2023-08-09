#include "main.h"
/**
 * _isalpha - _isalpha block
 *
 * Description:checks for alphabetic character.
 * @c: parameter to be verified
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
