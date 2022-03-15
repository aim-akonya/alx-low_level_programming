#include "main.h"

/**
 * _abs - check the code
 * @n: number
 * Return: 0
 */
int _abs(int n)
{
if (n < 0)
{
int ab = -n;
char c = ab + '0';
_putchar(c);
}
else
{
char c = n + '0';
_putchar(c);
}
return (0);
}
