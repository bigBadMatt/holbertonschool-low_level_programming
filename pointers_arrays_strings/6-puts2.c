#include "main.h"
/**
 * puts2 - prints every second char of a string
 * @str: a string
 */
void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;
	/* length of string, stored in len */
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	/*jump back off the null char*/
	len = len - 1;

	/*print every other char */
	while (i <= len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	/*terminate with a newline char*/
	_putchar('\n');
}
