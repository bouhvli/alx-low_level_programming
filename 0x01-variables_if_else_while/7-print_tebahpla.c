#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i = strlen(abc);

	while (i > -1)
	{
		putchar(abc[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
