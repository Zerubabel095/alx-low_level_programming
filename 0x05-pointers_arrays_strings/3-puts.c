#include "main.h"

/**
 * _puts - string can be printed
 * @str: The string to print
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
