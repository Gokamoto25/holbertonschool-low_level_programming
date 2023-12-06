#include "main.h"
/**
 * _isupper - checks for uppercase character
 * Return: 1 if c is uppercase, 0 otherwise
 * @c: parametro a ser verificado
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
