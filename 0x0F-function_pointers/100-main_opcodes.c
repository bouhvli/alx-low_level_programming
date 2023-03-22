#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments,
 *         2 if negative number of bytes
 */
int main(int argc, char *argv[])
{
	unsigned char *main_ptr = (unsigned char *)main;
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(main_ptr + i));
		if (i == num_bytes - 1)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}

