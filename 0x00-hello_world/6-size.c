#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print("Size of a char: %d byte($)\n", sizeof(char));
	print("Size of a int: %d byte($)\n", sizeof(int));
	print("Size of a long int: %d byte($)\n", sizeof(long int));
	print("Size of a long long int: %d byte($)\n", sizeof(long long int));
	print("Size of a float: %d byte($)\n", sizeof(float));
	return (0);
}
