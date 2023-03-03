#include <stdio.h>

/**
 * _strcat - Appends src string to the dest
 * @src - source
 * @dest - destination
 * Return: A pointer to the resultung string dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
