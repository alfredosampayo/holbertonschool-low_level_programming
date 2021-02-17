#include "holberton.h"
/**
 * _strlen - return lenght of string
 * @s: variable
 * Return: c
 */
int _strlen(char *s)
{

	int i;
	int c = 0;

	for (i = 0; (*(s + i)) != '\0';  i++)
	{
		c++;
	}

	return (c);
}
