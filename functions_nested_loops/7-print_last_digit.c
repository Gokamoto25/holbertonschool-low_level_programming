#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: parametro para ser verificado
 * Return: ultimoDigito
 */
int print_last_digit(int i)
{
int ultimoDigito;
ultimoDigito = i % 10;
if (ultimoDigito < 0)
{
ultimoDigito = ultimoDigito * -1;
}
_putchar(ultimoDigito + '0');
return (ultimoDigito);
}
