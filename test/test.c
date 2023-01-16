#include "../main.h"
#include <limits.h>
#include <stdio.h>


int main(void)
{
	char a = 'a';
	char *b = NULL;
  long int c = INT_MAX, l = UINT_MAX + 1024;
	int count1, count2;
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	count1 = _printf("simple statement\n");
	count2 = _printf("simple statement\n");
	printf("count [%d, %d]\n", count1, count2);

	count1 = _printf("%c\n", a);
	count2 = printf("%c\n", a);
	printf("count [%d, %d]\n", count1, count2);

	count1 = _printf("%s\n", b);
	count2 = printf("%s\n", b);
	printf("count [%d, %d]\n", count1, count2);

  count1 = _printf("%d\n", c);
	count2 = printf("%d\n", c);
	printf("count [%d, %d]\n", count1, count2);

	count1 = _printf("%%\n");
	count2 = printf("%%\n");
	printf("count [%d, %d]\n", count1, count2);
	_printf("%b\n", UINT_MAX);
	_printf("%b\n", l);
	_printf("Unsigned: [%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
}