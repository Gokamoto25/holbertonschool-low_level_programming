#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: parametro para ser verificado
 * Return: 1 para numeros positivo, -1 para
 * negativos y zero para el resto
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
