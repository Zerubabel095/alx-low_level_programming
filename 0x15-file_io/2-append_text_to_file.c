#include <stdio.h>
#include "main.h"

/**
 *append_text_to_file: it appends text to file
 *
 *@filename: it is the name of the file
 *@text_content: content of the txt
 *
 *Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	fprintf(file, "%s", text_content);
	fclose(file);

	return (1);
}






