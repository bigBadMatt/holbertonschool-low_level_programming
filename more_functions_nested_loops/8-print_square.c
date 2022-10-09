#include "main.h"
/**
 * print_square - prints a square
 * Return: void
 * @size : the length of the sides of the square
 */

void print_square(int size)
{
	int a;
	int d;

	d = 1;
	a = 1;

	if (size > 0)
	{
		while (d <= size)
		{
			while (a <= size)
			{
				_putchar('#');
				a = a + 1;
			}
			a = 1;
			_putchar('\n');
			d = d + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
