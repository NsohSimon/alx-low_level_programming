#include "main.h"
/**
 * print_last_digit-prints last digit
 * Return: last digit
 * @n: number
 */
int print_last_digit(int n)
{
int d = n % 10;
if (d < 0)
d *= -1;
_putchar(d + '0');
return (0);
}
