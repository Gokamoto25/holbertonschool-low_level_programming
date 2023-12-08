#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string a medir length
 * Return: length
 */
int _strlen(char *str)
{

int length = 0;

while (*str++)

length++;

return (length);

}
