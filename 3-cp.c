#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;
	int from_fd;
	int to_fd;
	if (argc != 3) 
	{
		dprintf(STDERR_FILENO, "usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "error: can't read from %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to_fd == -1) 
	{
		dprintf(STDERR_FILENO, "error: can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(from_fd, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
        if (bytes_written == -1) 
	{
		dprintf(STDERR_FILENO, "error: can't write to %s\n", argv[2]);
		exit(99);
	}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "error: can't read from %s\n", argv[1]);
		exit(98);
	}
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "error: can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1) 
	{
		dprintf(STDERR_FILENO, "error: can't close fd %d\n", to_fd);
		exit(100);
	}
	exit(0);
}



