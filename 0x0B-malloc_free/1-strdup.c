#include "main.h"
#include <stddef.h>
/**
 * char _strdup(char *str) - creates si
 * @str: string
 * Return: something
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char)*strlen(*str));
		s = *str;
		return (s);
	}
}
