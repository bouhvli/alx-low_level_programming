#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Adds two integers
 * @a: First integer to be added
 * @b: Second integer to be added
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two integers
 * @a: The integer to be subtracted from
 * @b: The integer to subtract
 *
 * Return: The result of subtracting b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: The first integer to multiply
 * @b: The second integer to multiply
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The quotient of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Computes the modulus of two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);

}
