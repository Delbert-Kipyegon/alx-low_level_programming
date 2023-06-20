#include "main.h"

/**
 * print_aphabet - Prints alphabet x10
 *
 * Return: Always 0 (Success)
 */

void print_aphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		for (j = 0; j < 26; j++)
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
}
