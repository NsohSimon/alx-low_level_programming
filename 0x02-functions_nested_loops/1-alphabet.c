#include "main.h"
/**
 * main-print lower case alphabets
 * Return: always 0
 */
void print_alphabet(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
_putchar('\n');
}
return (0);
}
