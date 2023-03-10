/**
 * main - the main function
 * @argc: count number of args
 * @argv: store the name of it
 *
 */
#include "main.h"
void main(int argc, char *argv[]) {
	for (int i = 0; i < argc; i++)
	{
		char *arg = argv[i];
		while (*arg != '\0')
		{
			_putchar(*arg);
			arg++;
		}
		_putchar('\n');
	}
}
