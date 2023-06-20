#include "main.h"

/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
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
