/**
  * main - a program that prints the first 50 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line.
  *
  * he numbers must be separated by comma, followed by a space ,
  * Return: 0.
  */
#include <stdio.h>

int main()
{
        int i = 0;
        long a = 1, b = 2, sum = b;

        while (b + a < 4000000)
        {
                b = b + a;
                if (b % 2 == 0)
                        sum = sum + b;
                a = b - a;
                i++;
        }
        printf("%ld\n", sum);
        return (0);
}
