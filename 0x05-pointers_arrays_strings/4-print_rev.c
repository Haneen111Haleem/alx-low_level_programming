#include "main.h"

/**
 *  print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
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
