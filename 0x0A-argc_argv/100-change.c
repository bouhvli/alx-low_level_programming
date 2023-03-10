#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins to make change for a given amount
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: number of coins or 1
**/
int main(int argc, char *argv[])
{
int amount = atoi(argv[1]);
int coins = 0;
int denominations[] = {25, 10, 5, 2, 1};
int i = 0;
int n = sizeof(denominations) / sizeof(denominations[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (amount > 0 && i < n)
	{
		coins += amount / denominations[i];
		amount %= denominations[i];
		i++;
	}
	printf("%d\n", coins);
	return (0);
}

