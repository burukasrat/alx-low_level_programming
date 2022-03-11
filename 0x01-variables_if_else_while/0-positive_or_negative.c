#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - this is the main function
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) /* true print it's positive */
		printf("%d is positive\n", n);
	else if (n < 0) /* true print it's negative */
		printf("%d is negative\n", n);
	else /* false print its zero */
		printf("%d is zero\n", n);
	return (0);
}
