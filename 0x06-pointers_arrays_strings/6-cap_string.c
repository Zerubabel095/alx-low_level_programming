#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - a function that capitalizes
 * @*str - a pointer to a string
 * Return: string
 */
char *cap_string(char *str)
{
	int i;
	int cap_next = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap_next && isalpha(str[i]))
	{
		    str[i] = toupper(str[i]);
	}
	cap_next = isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}';
	}
	return (str);
}
