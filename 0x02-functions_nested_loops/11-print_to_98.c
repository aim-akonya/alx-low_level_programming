#include "main.h"

/**
 * print_to_98 - print natural numbers
 * @n: - param 1
 * 
*/
void print_to_98(int n)
{
if (n <= 98)
{
int i;
for (i = n; i <= 98; i++)
{
int absVal;
if(i < 0){
absVal = -i;
_putchar('-');
}
else
{
absVal = i;
}

if(absVal <= 9)
{
_putchar(absVal + 'O');
}
else
{
_putchar(absVal / 10 + '0');
_putchar(absVal % 10 + '0');
}
if(i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
int i;
for (i = n; i >= 98; i--)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
if(i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}