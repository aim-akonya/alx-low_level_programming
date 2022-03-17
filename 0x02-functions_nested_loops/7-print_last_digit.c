#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: - number
 *Return: - returns the last digit
 */
int print_last_digit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
{
_putchar('0' + -lastDigit);
return (-lastDigit);
}
_putchar('0' + lastDigit);
return (lastDigit);
}
