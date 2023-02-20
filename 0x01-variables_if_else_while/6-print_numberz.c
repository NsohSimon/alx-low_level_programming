#include <stdio.h>
/**
 * main-entry point
 * Return: always 0 (success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
char n = i;
putchar(n);
i++;
}
putchar('\n');
return (0);
}
