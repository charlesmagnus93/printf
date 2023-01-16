#include "main.h"

/**
 * _print_str - prints a string
 * @string: string
 * Return: length 
 */

int _print_str(char *string)
{
	int count = 0;

	if (string != NULL)
		while (*string)
		{
			_putchar(*string++);
			count += 1;
		}
	else
		return (_print_str("(null)"));
	return (count);
}