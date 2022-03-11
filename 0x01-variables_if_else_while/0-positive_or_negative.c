#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) /* true print it's positive */
		printf("%d is positive", n);
	else if (n<0) /* true print it's negative */
		printf("%d is negative", n);
	else /* false print its zero */
		printf("%d is zero", n);
	return (0);
}
