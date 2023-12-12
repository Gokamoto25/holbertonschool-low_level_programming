#include "main.h"
int _raiz(int n, int i);
/**
 * _sqrt_recursion - calcula la raiz del numero natural
 * @n: numero a calcular la raiz
 * @i: numero a iterar
 * Return: la raiz del numero natural
 */

int _sqrt_recursion(int n)
{
	return (_raiz(n, 1));
}
/**
 * _raiz - calcula la raiz del numero natural
 *@n: numero a calcular la raiz
 *@i: numero raíz
 *Return: the natural square root of a number
 */
int _raiz(int n, int i)
{
	int raiz = i * i;

	if (raiz > n)
		return (-1);

	if (raiz == n)
		return (i);

	return (_raiz(n, i + 1));
}
