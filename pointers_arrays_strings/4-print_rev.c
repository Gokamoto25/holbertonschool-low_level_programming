#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * Return: void
 */
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

