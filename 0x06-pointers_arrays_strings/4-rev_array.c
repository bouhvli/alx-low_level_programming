#include "main.h"
/**
 * reverse_array - function that recieve a string and number
 * @a: first string
 * @n: second string
 *
 * Description: reverses the content of an array of integers.
 */
void reverse_array(int *a, int n)
{
	int i, host;

	for (i = 0; i < (n / 2); i++)
	{
		host = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = host;
	}
}
