#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * num_checker - checks if a given char is number or not
 * @a: char to be checked
 * Return: the converted number if it's a number, otherwise 0
 **/
int num_checker(char *a)
{
	int i, num, len;

	num = 0;
	i = 0;
	len = strlen(a);
	while (i < len)
	{
		if (!isdigit(a[i]))
			return (0);
		num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: result of addition or 1
 **/
int main(int argc, char *argv[])
{
	int i = 1, num = 0, sum = 0;

	while (i < argc)
	{
		num = num_checker(argv[i]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

