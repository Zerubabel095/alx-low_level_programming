#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase
 *
 * Return: something
 */
char *string_toupper(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{ 
    	if (str[i] >= 'a' && str[i] <= 'Z')
	{	
	    str[i] = str[i] - 'a' + 'A';
	}
	}
	return (str);
}
