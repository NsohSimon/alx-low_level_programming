#include <stdio.h>
#include <string.h>
/**
 * main-entry point
 * Return: always 0 (success)
 */
int main(void)
{
char ch;
ch='a';
while (ch <= 'z')
{
putchar("%c", ch);
ch++;
}
return (0);
}
