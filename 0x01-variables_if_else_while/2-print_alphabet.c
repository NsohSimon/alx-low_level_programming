#include <stdio.h>
#include <stdlib.h>
/**
 * main-entry point
 * Return: always 0 (success)
 */
int main(void)
{
char ch[25] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i <= 25; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
