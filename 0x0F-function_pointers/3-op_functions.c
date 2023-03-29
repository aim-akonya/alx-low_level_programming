#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - add two numbers
* @a: first param
* @b: second param
* Return: returs the summation
*/
int op_add(int a, int b)
{
	return (a + b);
}


/**
* op_sub - subtract two numbers
* @a: first param
* @b: second param
* Return: returs the subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - add two numbers
* @a: first param
* @b: second param
* Return: returs the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divide two numbers
* @a: first param
* @b: second param
* Return: returs the division
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
* op_mod - get the mod of a and b
* @a: first param
* @b: second param
* Return: returns the mod
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
