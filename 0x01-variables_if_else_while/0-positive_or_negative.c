#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main-entry point
 * Return: always zero (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	  {
	    printf("%lu\n is positive");
	  }
	else if (n=0)
	  {
	    printf("%lu\n is zero");
	  }
	else
	  {
	    printf("%lu\n is negative");
	  }
	return (0);
}
