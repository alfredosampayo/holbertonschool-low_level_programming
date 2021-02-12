#include "holberton.h"
/**
 *
 *
 *
 */
int mul(int a, int b)
{
	if((a == 0) || (b == 0))
		return 0;
	else

	return (a + mul(a, b - 1)); 
}
