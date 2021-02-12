#include "holberton.h"
/**
 * print_most_numbers - prints numbers from 0-9 except 2 nd 4
 * Return: most numbers
 */
void print_most_numbers(void)
{
	int x = '0';


	for (x = '0'; x <= '9'; x++)

	{
	if (x != '2' && x != '4')



	_putchar(x);

	}
	_putchar('\n');
}






