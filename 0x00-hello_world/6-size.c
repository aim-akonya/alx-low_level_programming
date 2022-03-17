#include<stdio.h>

/**
* main - main function
* Return: - returns 0
*/
int main(void)
{
int intType;
long int longInt;
long long int longLongint;
float floatType;
char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongint));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
