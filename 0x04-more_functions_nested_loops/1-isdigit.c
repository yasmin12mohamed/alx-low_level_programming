#include "main.h"
/**
 * _isdigit - _isdigit block
 *
 * Description:function that checks for a digit (0 through 9)
 * @c:parameter to be verified
 *
 * Return:1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
