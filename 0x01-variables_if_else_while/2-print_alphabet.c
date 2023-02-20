#include <stdio.h>
#include <stdlib.h>
/**
 * main-entry point
 * Return: always 0 (success)
 */
int main(void)
{
char ch[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i=1; i <= 26; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
