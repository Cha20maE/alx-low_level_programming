#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *@c: The number to be computed
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _abs(int c)

{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}

	return (c);

}
