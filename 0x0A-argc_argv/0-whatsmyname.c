/**
 * main - the main function
 * @argc: count number of args
 * @argv: store the name of it
 *
 */
#include "main.h"
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			_putchar(*arg);
			arg++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
