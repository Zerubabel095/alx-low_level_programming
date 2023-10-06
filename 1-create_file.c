#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"
#include <string.h>

/**
 *create_file: creats file 
 *
 *@filename: it is the name of the file
 *@text_content: content of the text
 *
 *Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_status;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	write_status = write(file_descriptor, text_content, strlen(text_content));
	if (write_status == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	}
	close(file_descriptor);
	return (1);
}



