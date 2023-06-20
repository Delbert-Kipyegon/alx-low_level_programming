#include "main.h"

/**
 * print_aphabet_x10 - Prints the alphabet ten times.
 *
 * Description:	This function prints the lowercase alphabet 10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		for (j = 0; j < 26; j++)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
