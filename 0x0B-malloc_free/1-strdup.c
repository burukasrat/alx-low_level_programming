#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * char _strdup(char *str) - creates si
 * @str: string
 * Return: something
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			;
		s = (char *)malloc(sizeof(char)*(i + 1));
		for (int j = 0; str[j] != '\0'; j++)
			s[j] = str[j];
		return (s);
	}
}
