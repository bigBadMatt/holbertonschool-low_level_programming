#include "main.h"
/**
 * times_table - function to print a times-table up to 9
 * Return : void
 *
 */

void times_table(void)
{
	int dwn;
	int acc;
	int res;

	dwn = 0;
	acc = 0;

	while (dwn < 10)
	{
		while (acc < 10)
		{
			res = dwn * acc;
			if (acc == 0)
			{
				_putchar('0');
					}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (res > 9)
				{
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
				}
				else
				{
					_putchar(' ');
					_putchar('0' + res);
				}
			}
			acc = acc + 1;

		}
		_putchar('\n');
		acc = 0;
		dwn = dwn + 1;
	}
}
