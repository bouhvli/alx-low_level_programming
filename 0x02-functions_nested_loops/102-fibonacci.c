/**
  * main - a program that prints the first 50 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line.
  *
  * he numbers must be separated by comma, followed by a space ,
  * Return: 0.
  */
#include <stdio.h>

int main(void)
{
	int i = 0;
	long a = 1, b = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", a);
		else if (i == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}

		++i;
	}

	printf("\n");
	return (0);
}
