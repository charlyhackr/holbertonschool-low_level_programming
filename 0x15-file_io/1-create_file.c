#include "holberton.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_des, r_status, con;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_des == -1)
		return (-1);

	if (text_content)
	{
		for (con = 0; text_content[con] != '\0'; con++)
			;
		r_status = write(file_des, text_content, con);
		if (r_status == -1)
			return (-1);
	}

	close(file_des);
	return (1);
}
