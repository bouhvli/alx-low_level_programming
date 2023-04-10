#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file
 * can not be written, write “fails”, etc…).
 *
 * Description: The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file, state = -1;

	if (filename == NULL)
		return (state);
	file = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
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
		return (state);
	return (1);
}
