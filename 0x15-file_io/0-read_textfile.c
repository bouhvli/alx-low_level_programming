#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: a pointer to the file.
 * @letters: number of letters to print.
 *
 * Description: where letters is the number of letters it should
 * read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead, byteWritten, totalBytes = 0;
	int file;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, buffer, letters);
	if (bytesRead < 0)
	{
		close(file);
		return (0);
	}

	totalBytes += bytesRead;

	byteWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (byteWritten < 0)
	{
		close(file);
		return (0);
	}

	close(file);
	return (totalBytes);
}
