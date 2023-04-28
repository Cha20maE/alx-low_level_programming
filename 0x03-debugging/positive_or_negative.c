#include "main.h"

/**
  * positive_or_negative - Determines if a number is positive, negative or 0.
  * @i: The number to be checked
  * Return: Always 0 (Success)
  */

void positive_or_negative(int i)

{

	if (i < 0)
	{
	printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
}
