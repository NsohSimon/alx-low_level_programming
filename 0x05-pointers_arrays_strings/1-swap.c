#include "main.h"
#include <stdio.h>
/**
 * swap_int- swap the values of two variables
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
int d = *a;
*a = *b;
*b = d;
}
