#include <stdio.h>
/**
 *main - initialized variable 
 *Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long longType;

	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
	printf("size of char: %zu bytes\n", sizeof(charType));
	printf("size of long: %zu bytes\n", sizeof(longType));	
	return (0);
}
