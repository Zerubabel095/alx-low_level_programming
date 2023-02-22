#include "main.h"
#include <ctype.h>

/**
  * _abs - Computes the absolute value of an integer.
  * @c: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int c)
{
	if (c < 0)
	{
		int a_v;
		a_v = c * -1;
		return (a_v);
	}
	
	return (c);
}
	
	
