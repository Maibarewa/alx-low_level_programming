#include "main.h"

/**
 * read_textfile - read a text file and print it ro the standard oujtput
 * @filename: name of the fie to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or zero if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, y;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO,buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	return (y);
}


