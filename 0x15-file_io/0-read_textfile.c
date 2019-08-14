#include "holberton.h"

/**
 * read_textfile - Read a text file and print to POSIX
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: numr of letters read and printed, or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t read_c, write_c;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_des = open(filename, O_RDWR);
	if (file_des == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	read_c = read(file_des, buffer, letters);
	if (read_c == -1)
		return (0);

	write_c = write(STDOUT_FILENO, buffer, read_c);
	if (write_c == -1 || read_c != write_c)
		return (0);
	free(buffer);

	close(file_des);
	return (write_c);
}
