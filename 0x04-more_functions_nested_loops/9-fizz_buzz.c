#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;
	while (i < 101)
	{   
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if(i % 3 == 0)
		{
		printf("Fizz");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		printf(" ");
		i++;
	}
	return (0);
}
