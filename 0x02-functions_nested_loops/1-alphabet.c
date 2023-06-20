#include "main.h"

/**
 * print_alphabet - Prints alphabet followed by a new line
 *
 * Return: Alway 0 (Sucess)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
