#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * Return: returns 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
