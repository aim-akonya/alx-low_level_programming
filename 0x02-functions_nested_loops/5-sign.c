#include "main.h"

/**
 * print_sign - check the code
 * @n: number
 * Return: -1 if n<-, 1 if n>0, else 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
