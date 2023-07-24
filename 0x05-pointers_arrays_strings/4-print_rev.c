#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void print_rev(char *str)
{
	int i;

	for (str[i] != '\0'; i = 0 ;  i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
