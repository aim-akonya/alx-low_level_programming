#include "main.h"

/**
* sqtr_compute - compute square root
* @n: number
* @val: index
* Return: returns the computed square root
*/
int sqtr_compute(int n, int val)
{
	int res;

	res = val * val;
	if (res < n)
	{
		return (sqtr_compute(n, ++val));
	}

	if (res == n)
	{
		return (res);
	}

	return (-1);
}

/**
* _sqrt_recursion - compute square root
* @n: number
* Return: returns the computed square root
*/
int _sqrt_recursion(int n)
{
	return (sqtr_compute(n, 1));
}
