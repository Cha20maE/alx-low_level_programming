#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase
 * @y: The pointer tp string
 * Return: Pointer to uppercase string
 */

char *string_toupper(char *y)

{
	int length_of_string;

	length_of_string = 0;

	while (y[length_of_string] != '\0')
	{
		if (y[length_of_string] >= 97 && y[length_of_string] >= 12)
		{
		y[length_of_string] = y[length_of_string] - 32;
		}
		length_of_string++;
	}

	return (y);

}
