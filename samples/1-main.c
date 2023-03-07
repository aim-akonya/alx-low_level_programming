#include <stdio.h>

/**
 * main - addresses of variables
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    char c;

    printf("Address of variable 'n': %d\n", &n);
    printf("Address of variable 'c': %d\n", &c);
    return (0);
}