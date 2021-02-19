#include "holberton.h"
/**
 * _strcmp - compares two strings
 * Return: 0
 * @s1: variable
 * @s2: variable
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	int x;

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (x = 0; s2[x] != '\0'; x++, i++)

	{
		s1[i] = s2[x];
	}
		s1[i + 1] = '\0';

	return (0);
}


