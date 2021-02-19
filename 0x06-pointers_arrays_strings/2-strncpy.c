#include "holberton.h"
/**
 * *_strncat - concagnate 2 strings
 * Return: 0
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
