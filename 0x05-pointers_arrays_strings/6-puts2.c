#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: Input
 * Return: Print
 */

void puts2(char *str)

{

	int longi = 0;
	int m = 0;
	char *q = str;
	int o;

	while (*q != '\0')
	{
		q++;
		longi++;
	}
	m = longi - 1;
	for (o = 0 ; o <= m ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\0');

}
