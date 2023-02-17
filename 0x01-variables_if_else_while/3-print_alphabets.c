#include <stdlib.h>
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
	int i = 0;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	char ABC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (abc[i])
	{
		putchar(abc[i]);
		i++;
	}
	i = 0;
	while (ABC[i])
	{
		putchar(ABC[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
