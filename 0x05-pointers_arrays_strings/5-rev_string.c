#include "holberton.h"
/**
 * rev_string - reverses a string
 * Return: void
 * @s: variable
 */
void rev_string(char *s)
{
	int str_z;
	int str_a;
	char x;

	str_a = 0;
	str_z = 0;

	while (s[str_z] != '\0')
		str_z++;

	for (str_z = (str_z - 1); str_z > str_a; str_z--)
	{
		x = s[str_a];
		s[str_a] = s[str_z];
		s[str_z] = x;
		str_a++;
	}
}
