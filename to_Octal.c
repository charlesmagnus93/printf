#include "main.h"

/**
  * to_Octal - to Octal
  * @num: the number
  * Return: number.
  */
int to_Octal(unsigned int num)
{
	int chars_counter = 0, modula, octal[sizeof(unsigned int) * 8], i, j = 0;

	while (num != 0)
	{
		modula = num % 8;
		octal[j++] = '0' + modula;
		num /= 8;
	}
	for (i = j - 1; i >= 0; i--)
		chars_counter += _putchar(octal[i]);
	return (chars_counter);
}