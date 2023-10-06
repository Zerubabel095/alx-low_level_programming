#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 *read_textfile: it reads the text file
 *
 *@filename: name of the file
 *@letters: letters could be used
 *
 *Return: bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	bytes_read = fread(buffer, sizeof(char), letters, fp);
	if (bytes_read == -1)
		return (0);
	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);
	fclose(fp);
	free(buffer);
	return (bytes_read);
}

