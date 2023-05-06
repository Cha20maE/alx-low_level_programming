#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: The negative difference of the first for str1 < str2
 * Zero for str1 = str2
 * The positive difference of the first for str1 > str2.
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);

}
