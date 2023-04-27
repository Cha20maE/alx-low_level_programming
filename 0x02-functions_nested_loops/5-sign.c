#include "main.h"

/**
 * print_sign - Print the sign of a number
 *@c: The character to be checked
 * Return: 1 for positive num, -1 for negative num and 0 for anything else
 *
 */
int print_sign(int n)

{

	if (n > 0)
	{
	_putchar(62);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(66);
	return (-1);
	}
	else
	{
	_putchar(69);
	}
	return (0);

}
