#include "main.h"
/**
 * _strcat - concatenates strings
 * Return: char
 * @dest: first char
 * @src: second char
 */
char *_strcat(char *dest, char *src)
{
	return (*dest = *dest + *src + '\0');

}
