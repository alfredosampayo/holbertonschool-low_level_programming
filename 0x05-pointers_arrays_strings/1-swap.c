#include "holberton.h"
/**
 * swap_int - swap values of integers
 * @a: swapping variable
 * @b: swapping variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
