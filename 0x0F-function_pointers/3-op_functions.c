#include "3-calc.h"

/**
* op_add - add this files
* @a: integer a
* @b: integer b
* Return: sum of a+b
*/

int op_add(int a, int b)
{
	return (a + b);

}

/**
* op_sub - subtracts this files
* @a: integer a
* @b: integer b
* Return: sum of a+b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two numbers.
* @a: first number
* @b: second number.
*
* Return: multiplication.
 */

int op_mul(int a, int b)
{

	return (a * b);

}


/**
* op_div - Divide two numbers.
* @a: first number.
* @b: second number.
*
* Return: Division
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
* op_mod - modulize two numbers.
* @a: first number.
* @b: second number.
*
* Return: Modular.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
