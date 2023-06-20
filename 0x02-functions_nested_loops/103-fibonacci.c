#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Prints the sum of even-valued terms in the Fibonacci sequence
 * that do not exceed 4,000,000.
 *
 * Return: Always 0
 */
int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int fib3 = 0;
	int sum = 2;  /* Start with the sum as 2 (for the initial even term 2) */

	while (fib3 <= 4000000)
	{
		fib3 = fib1 + fib2;

		if (fib3 % 2 == 0)
		{
			sum += fib3;
		}

		fib1 = fib2;
		fib2 = fib3;
	}

	printf("%d\n", sum);

	return (0);
}
