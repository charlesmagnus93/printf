#include "main.h"

/**
 * to_Hexa - to Hexa
 * @num: the number
 * Return: number
 */
int to_Hexa(unsigned int num)
{
	int chars_counter = 0, modula, hexa[sizeof(unsigned int) * 8], j = 0, i;

	while (num != 0)
	{
		modula = num % 16;
		if (modula < 10)
			hexa[j++] = 48 + modula;
		else
			hexa[j++] = 55 + modula;
		num /= 16;
	}
	for (i = j - 1; i >= 0; i--)
		chars_counter += _putchar(hexa[i]);
	return (chars_counter);
}