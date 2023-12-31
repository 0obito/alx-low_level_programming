#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: a text file
 * @letters: number of letters to print/read
 *
 * Return: number of letters printed/read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[5000];
	ssize_t bytes_read;
	ssize_t bytes_written;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);


	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_written);
}
