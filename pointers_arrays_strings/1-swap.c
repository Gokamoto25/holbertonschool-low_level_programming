#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: primer valor para ser intercambiado
 * @b: segundo valor para ser intercambiado
 * @c: variable para almacenar direccion
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
