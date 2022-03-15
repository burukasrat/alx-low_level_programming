#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - to 98
 * Return: void
 * @n: num
 */
void print_to_98(int n)
{
	if (n < 98) /* check less 98*/
	{
		while (n < 99) /*print*/
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 97) /*print*/
		{
			print("%d, ", n);
			n--;
		}
	}
}
