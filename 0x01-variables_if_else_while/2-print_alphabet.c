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
	
	while (abc[i])
	{
		putchar(abc[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
