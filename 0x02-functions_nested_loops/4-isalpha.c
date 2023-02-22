#include "main.h"
#include<ctype.h>

/**
 * _isalpha-check alphabet character
 *
 * Return: 1 if c is uppercase or lowercase, otherwise return 0
 */
int _isalpha(int c)
{
	if(c >= 65 && c <= 122)
	{
	return(1);
	}
	return(0);
}	
