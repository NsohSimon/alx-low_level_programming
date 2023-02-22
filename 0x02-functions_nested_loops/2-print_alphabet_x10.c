#include "main.h"
/**
 * void print_alphabet_x10(void)-prints alphabets 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
int t = 1;
while (t <= 10)
{
char l;
for (l = 'a'; l<= 'z'; l++)
{
_putchar(l);
t++;
}
_putchar('\n');
}
