#include <stdio.h>
#include <string.h>

/**
 * _strncat - similar function to the _strcat
 * @src - doesnot need to be null terminated
 * @dest - resulting string
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{	
	char *p = dest + strlen(dest);
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*p++ = src[i]; 
	}
	*p = '\0';
	return (dest);
}
