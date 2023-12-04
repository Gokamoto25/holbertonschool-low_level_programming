#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: parametro a ser verificado
 * Return: 0
 */
int _abs(int i)
{
if (i < 0)
{
	int valorAbsoluto;
	valorAbsoluto = i * -1;
	return (valorAbsoluto);
}
return (i);
}
