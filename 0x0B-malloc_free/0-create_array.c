#include "main.h"
#include <stdlib.h>
/**
 * char *create_array - creates array with assined size
 * @size: size of array
 * @c: name of the array
 * Return: NULL or array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return ("NULL");
	}
	else
	{
		return (c = malloc(size));
	}
}
