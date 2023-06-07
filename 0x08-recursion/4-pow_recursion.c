#include "main.h"

/**
* pow_multiple - multiply power value
* @x: base value
* @index: count of multiples
* @result: multiplication result
* Return - returns the power of a value
*/
int pow_multiple(int x, int index, int result)
{
	if (index > 0)
	{
		int val;

		val = x * result;
		return (pow_multiple(x, --index, val));
	}

	return (result);
}

/**
*  _pow_recursion - compute power of a number
* @x: base value
* @y: power value
* Return: returns the power of the value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (pow_multiple(x, y, 1));
}
