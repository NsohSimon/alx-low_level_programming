#include "main.h"
/**
 * _isdigit-tells if its a digit
 * Return: 1 if a digit and 0 if not
 * @c: digit to be evaluated
 */
int _isdigit(int c)
{
if (c <= '9' && c >= '0')
{
return (1);
}
else
{
return (0);
}
}
