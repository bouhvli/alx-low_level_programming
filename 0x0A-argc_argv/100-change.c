#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number of coins to make change
 * for an amount of money.
 * @argc:number;
 * @argv:string;
 *
 * Return:if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			coins += cents / 25;
			cents %= 25;
		}
		else if (cents >= 10)
		{
			coins += cents / 10;
			cents %= 10;
		}
		else if (cents >= 5)
		{
			coins += cents / 5;
			cents %= 5;
		}
		else if (cents >= 2)
		{
			coins += cents / 2;
			cents %= 2;
		}
		else
		{
			coins += cents;
			cents = 0;
		}
	}
	printf("%d\n", coins);
	return (0);
}

