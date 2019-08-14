#include "holberton.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to add to end file
 * Return: 1 on succes, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, status, con;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file_des = open(filename, O_APPEND | O_WRONLY);
	if (file_des == -1)
		return (-1);

	for (con = 0; text_content[con] != '\0'; con++)
		;
	status = write(file_des, text_content, con);
	if (status == -1)
		return (-1);

	close(file_des);
	return (1);
}
