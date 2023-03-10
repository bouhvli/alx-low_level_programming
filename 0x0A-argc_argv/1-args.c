/**
 * main - show the number of args
 * @argc: the number of args
 * @argv: the args entered 'string format'
 *
 * Return: 0
 */
#include "main.h"
int main(int argc, char *argv[])
{
	int a = argc - 1;

	(void)argv;
	_putchar(a + '0');
	_putchar('\n');
	return (0);
}
