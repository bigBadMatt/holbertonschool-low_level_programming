#include <stdio.h>

/**
 *main - print the name of the executable that this program is run from
 * @argc:argc
 * @argv: argv
 * Return: zero
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		argc = 1;
	}
	printf("%s\n", argv[0]);
	return (0);
}
