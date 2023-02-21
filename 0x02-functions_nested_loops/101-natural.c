/**
 * print_to_98 - program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024.
 *
 * Description:If we list all the natural numbers below 10
 * that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23
 * Return: 0.
 */
#include "main.h"
#include <stdio.h>

int main(void)
{
  int number = 1024, i, sum = 0;

  for(i = 0; i < number; i++)
  {
    if((i % 3) || (i % 5))
    {
      printf("%d", i);
      sum = sum + i;
    }
  }
  printf("%d \n", sum);
  return (0);
}
