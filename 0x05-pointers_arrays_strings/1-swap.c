#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: Integer to swap
 * @b: Integer to swap
 */

void swap_int(int *a, int *b)

{

	int q;

	q = *a;
	*a = *b;
	*b = q;

}
