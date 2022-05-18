#include "main.h"

int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent}
	};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
