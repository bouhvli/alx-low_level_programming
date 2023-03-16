#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - check if the char is a number
 * @c: char to check
 *
 * Return: true if yes and false if not.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * str_to_int - convert to integer.
 * @str: the string.
 *
 * Return: the result.
 */
int str_to_int(char *str)
{
	int result = 0;

	while (*str)
	{
		if (!is_digit(*str))
		{
			printf("Error\n");
			exit(98);
		}
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}
/**
 * main - check the code for
 * @argc: the number of param.
 * @argv: the params name.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1 = str_to_int(argv[1]);
	int num2 = str_to_int(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", result);
	return (0);
}
