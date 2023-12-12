#include "main.h"
int _primo(int n, int i);

/**
 * is_prime_number - verifica si el numero de entrada es primo o no
 * @n: numero a ser verificado
 * Return: 1 if the input integer is a
 * prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (_primo(n, 1));
}

/**
 * _primo - verifica si el numero es primo o no
 * @n: numero a verificar
 * @i: numero a iterar
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int _primo(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (_primo(n, i + 1));
}
