#include "main.h"
/**
 * _strlen- prints length of a string
 * @s: string to be printed
 * Return: length of string
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
