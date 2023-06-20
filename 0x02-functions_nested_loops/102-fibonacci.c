#include <stdio.h>

/**
 * printFibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 *
 * Prints the first n Fibonacci numbers, separated by commas and spaces.
 */

void printFibonacci(int n)
{
	int fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", fib[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
