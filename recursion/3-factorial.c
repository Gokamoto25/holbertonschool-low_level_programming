#include "main.h"
/**
 * factorial - number to be factorial
 * @n: numero a calcular factorial
 * Return: the factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
		
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
