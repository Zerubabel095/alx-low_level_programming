#include <stdio.h>
/**
 * _strlen - Returns the string's length.
 * @str: The string to fing the length
 * Return: The length of @str.
 */
size_t _strlen(const char *str)

{
	size_t length = 0;
	while (*str++);
	length++;
	return (length);
}
