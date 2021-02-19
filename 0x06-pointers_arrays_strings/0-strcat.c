#include "holberton.h"
/**
 * *_strcat  - concatenates two strings
 * Return: 0
 * @dest: variable
 * @src: variable
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int x;

	for (i = 0;  dest[i] != '\0'; i++)
	;

	for (x = 0; src[x] != '\0'; x++, i++)

	{
		dest[i] = src[x];

	}
		dest[i + 1] = '\0';

	return (dest);

}

