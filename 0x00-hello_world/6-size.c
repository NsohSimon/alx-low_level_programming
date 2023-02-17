#include <stdio.h>
/**
 * main-entry point
 * Return: always 0 (success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %lu", (unsigned long)sizeof(c), " byte(s)");
printf("Size of an int: %lu", (unsigned long)sizeof(i), " byte(s)");
printf("Size of a long int: %lu", (unsigned long)sizeof(li), " byte(s)");
printf("Size of a long long int: %lu", (unsigned long)sizeof(lli), " byte(s)");
printf("Size of a float: %lu", (unsigned long)sizeof(f), " byte(s)");
}
