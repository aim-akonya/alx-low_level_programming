#include "main.h"

/**
* check_factors - recursive function to check possible factors of a number
*/
int check_factors(int n, int factor)
{
	if (factor < n)
	{
		if (n % factor == 0){
			return (0);
		}
		return (check_factors(n, ++factor));
	}
	return (1);
}


/**
* is_prime_number - fuction to check if a number is prime
* @n: number
* Return: 1 is n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_factors(n, 2));
}