#include "holberton.h"
/**
 * *_strncpy - copy  strings
 * Return: dest
 * @dest: variable
 * @src: variable
 * @n:  variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int x;

	for (i = 0; dest[i] != '\0'; i++)

	;

for (x = 0; src[x] != '\0' && n > 0; x++, i++)

	{

		 dest[i] = src[x];
		i++;
	}


	return (dest);
}
