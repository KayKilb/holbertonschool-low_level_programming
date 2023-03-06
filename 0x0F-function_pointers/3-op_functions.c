#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two numbers
 *
 * @a: input
 * @b: input
 *
 * Return: result of the sum of two numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two numbers
 *
 * @a: input
 * @b: input
 *
 * Return: result of the subtraction of two numbers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 *
 * @a: input
 * @b: input
 *
 * Return: multiplication of two numbers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 *
 * @a: input
 * @b: input
 *
 * Return: result of the division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulation of two numbers
 *
 * @a: input
 * @b: input
 *
 * Return: modulation of two numbers
*/

int op_mod(int a, int b)
{
	return (a % b);
}
