#include "main.h"

/**
 * print_alphabet - prints the alphabet in the lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c = 'a';
	for(c = 'a'; c <= 'z';c++)
	{
	   _putchar(c);
	}	
	_putchar('\n');
}
