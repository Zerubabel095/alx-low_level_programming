#include "main.h"
#include <ctype.h>

/**
  * print_sign - Checks for sign of a number
  * @n: The number to be checked
  *
  * Return: 1 for n greater than 0 or 0 for n equal to 0 and -1 for n lessthan 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
