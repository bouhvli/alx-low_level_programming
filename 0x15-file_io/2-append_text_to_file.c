#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 *
 * Description: do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file. Return 1 if the
 * file exists and -1 if the file does not exist or if you do not have the
 * required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, state = -1;

	if (filename == NULL)
		return (state);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (state);
	state = 1;
	if (text_content == NULL)
	{
		close(file);
		return (state);
	}
	state = write(file, text_content, strlen(text_content));
	if (state == -1)
	{
		close(file);
		return (state);
	}
	close(file);
	return (1);
}
