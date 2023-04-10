#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
void _close(int n, ...);
void read_and_write(const char *filename,
		const char *filename_to, size_t letters);
void _opened(int f1, int f2, const char *fn1, const char *fn2);
/**
 * main - a program that copies the content of a file to another file.
 * @ac: number of arguments passed to the program
 * @av: pointer to the array of arguments.
 *
 * if the number of argument is not the correct one, exit with code 97
 * and print Usage: cp file_from file_to, followed by a new line,
 * on the POSIX standard error.
 * if file_to already exists, truncate it.
 *
 * if file_from does not exist, or if you can not read it,
 * exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error.
 *	where NAME_OF_THE_FILE is the first argument passed to your program.
 *
 * if you can not create or if write to file_to fails, exit with code 99
 * and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line,
 * on the POSIX standard error.
 *	where NAME_OF_THE_FILE is the second argument passed to your program
 *
 * if you can not close a file descriptor , exit with code 100 and print Error:
 * Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
 *	where FD_VALUE is the value of the file descriptor.
 * Permissions of the created file: rw-rw-r--. If the file already exists,
 * do not change the permissions.
 *
 * You must read 1,024 bytes at a time from the file_from to make less
 * system calls. Use a buffer.
 * Return: 0 if sucess
*/
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_and_write(av[1], av[2], 1024);
	return (0);
}
/**
 * read_and_write - a function that reads a text file and prints it to the
 * another file.
 * @filename: a pointer to the file we copy from.
 * @letters: number of letters to print.
 * @filename_to : a pointer to the file we copy to.
 */
void read_and_write(const char *filename,
		const char *filename_to, size_t letters)
{
	char *buffer;
	ssize_t bytesRead, byteWritten;
	int file, file_to;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (filename_to == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", filename_to);
		exit(99);
	}
	file = open(filename, O_RDONLY);
	_opened(file, 1, filename, "nope");
	file_to = open(filename_to, O_WRONLY | O_TRUNC | O_CREAT, 662);
	_opened(file, file_to, filename, filename_to);
	do {
		bytesRead = read(file, buffer, letters);
		if (bytesRead < 0)
		{
			dprintf(2,
				"Error: Can't read from file %s\n",
				filename);
			exit(98);
		}
		byteWritten = write(file_to, buffer, bytesRead);
		if (byteWritten < 0)
		{
			dprintf(2,
				"Error: Can't write to %s\n",
				filename_to);
			exit(99);
		}
	} while (bytesRead > 0);
	_close(2, file, file_to);
}
/**
 * _close - close files.
 * @n: number of files.
 */
void _close(int n, ...)
{
	va_list fp;
	int file, state = -1;

	va_start(fp, n);
	while (n != 0)
	{
		file = va_arg(fp, int);
		state = close(file);
		if (state < 0)
		{
			dprintf(2, "Error: Can't close fd %d\n", file);
			exit(100);
		}
		n--;
	}
	va_end(fp);
}
/**
 * _opened - check if files are open.
 * @f1: file from.
 * @f2: file to.
 * @fn1: file from name.
 * @fn2: file to name.
 */
void _opened(int f1, int f2, const char *fn1, const char *fn2)
{
	if (f1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", fn1);
		exit(98);
	}
	if (f2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", fn2);
		_close(1, f1);
		exit(99);
	}
}
