#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * get_op_func - elects the correct function to perform the operation requested
 * @s: operator passed as argument to the program
 * Return: the result
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i = i + 1;
	}
}
