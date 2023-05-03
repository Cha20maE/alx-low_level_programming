#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int j = 0;
	int q;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	q = (j - 1) / 2;
	q += 1;
	}
	else
	{
	q = j / 2;
	}

	for (; q < j; q++)
	{
	_putchar(str[q]);
	}
	_putchar('\n');

}
