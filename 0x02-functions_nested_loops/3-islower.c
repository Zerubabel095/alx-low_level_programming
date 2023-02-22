#include "main.h"
#include<ctype.h> 

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if c is lower case 0 if anything else
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
	return(1);
	}
	return(0);
}
