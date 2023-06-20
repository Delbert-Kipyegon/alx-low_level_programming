#include "main.h"

/**
 * main - prints _putchar, followed by a newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *p = "_putchar\n";

	while (*p)
	{	
		_putchar(*p);
		p++;
	}
return (0);
}

