#include <stdio.h>

/**
 * _strcat - Appends src string to the dest
 * @src - source
 * @dest - destination
 * Return: A pointer to the resultung string dest
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int m;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}
	dest[l] = '\0';
	return (dest);
}
