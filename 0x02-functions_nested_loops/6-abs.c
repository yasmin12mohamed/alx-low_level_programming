#include "main.h"
/**
 * _abs - _abs block
 *
 * Description:computes the absolute value of an integer
 * @r: the parameter to be verified
 *
 * Return: 0
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		r = r * -1;
		return (-1);
	}
	else
	{
		return (0);
	}
}
