#include "holberton.h"
/**
 * mul - multiplies 2 integers
 * Return: resultant of two multiplied integers
 * @c:1
 */
int mul(int a, int b)
{
	if ((a == 0) || (b == 0))
		return (0);
	else

	return (a + mul(a, b - 1));
}
