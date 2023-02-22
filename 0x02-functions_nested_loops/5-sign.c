#include "main.h"
/**
 * print_sign-tells if it's positive or negative
 * Return: 1 if pos 0 if 0 -1 if negative
 * @n: number to be identified
 */
int print_sign(int n)
{
if (n > 0)
_putchar('+');
return (1);
if (n == 0)
_putchar('0');
return (0);
if (n < 0)
_putchar('-');
return (-1);
}
