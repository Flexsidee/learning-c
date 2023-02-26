#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l = n % 10;
	
	if (n > 5)
	   printf("Last digit of %i is %i and is greater than 5", n l);
	else if ()
	return (0);
}
