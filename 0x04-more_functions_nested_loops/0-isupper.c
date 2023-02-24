#include "main.h"
/**
 * _isupper-determines whether a letter is uc /lc
 * Return: 1 if uc and 0 if lc
 * @c: letter to be determined
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
