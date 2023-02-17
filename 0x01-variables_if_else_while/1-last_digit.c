#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	printf("Last digit of %d ", n);
	if (l < 6 && l != 0)
		printf("is %d less than 6 and not 0\n", l);
	else if (l > 5)
		printf("is %d greater than 5\n", l);
	else
		printf("is 0\n");
	return (0);
}
