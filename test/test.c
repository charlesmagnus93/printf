#include "../main.h"
#include <limits.h>
#include <stdio.h>


int main(void)
{
	char a = 'a';
	char *b = NULL;

	count1 = _printf("simple statement\n");
	count2 = _printf("simple statement\n");
	printf("count [%d, %d]\n", count1, count2);

	count1 = _printf("%c\n", a);
	count2 = printf("%c\n", a);
	printf("count [%d, %d]\n", count1, count2);

	count1 = _printf("%s\n", b);
	count2 = printf("%s\n", b);
	printf("count [%d, %d]\n", count1, count2);
}