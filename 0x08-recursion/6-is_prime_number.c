/**
 * primeFinder - look if a number is prime
 * @x: number that will be checked
 * @y: the numbers we'll go through
 * Return: if a prime 1 if no 0
 */
#include "main.h"
int primeFinder(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);
	else if (x == y)
		return (1);
	else if (x > y)
	primeFinder(x, y + 1);

	return (1);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number to check
 *
 * Return: if a prime 1 if no 0
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
