#include "main.h"
/**
 * _isalpha-tells if it's an alphabet
 * Return: 1 if alphabet 0 if not
 * @c: Character to be determined
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
