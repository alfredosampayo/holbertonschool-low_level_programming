#include "holberton.h"
/**
 * mul - multiplies 2 integers
 * Return: resultant of two multiplied integers
 * @c:1
 */
int mul(int a, int b)
{
	if (b == 0)
		return (0);
	if (b > 0)

		return (a + mul(a, b-1));

	if (b < 0)
		return -mul(a, -b);
}
