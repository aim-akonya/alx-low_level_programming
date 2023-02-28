#include "main.h"

/**
* print_diagonal - print a diagonal line
* @n: input param representing height of the diagonal line
*/
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j <= i; j++)
		{

			if (i != j)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
