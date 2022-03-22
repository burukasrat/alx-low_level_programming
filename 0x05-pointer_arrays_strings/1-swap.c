#include "main.h"
/**
 * swap_int - swap values of variables
 * Return: void
 * @a: first var
 * @b: second var
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
