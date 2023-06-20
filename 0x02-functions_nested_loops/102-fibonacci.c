#include <stdio.h>

/**
 * printFibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 *
 * Prints the first n Fibonacci numbers, separated by commas and spaces.
 */

void printFibonacci(int n)
{
	unsigned long fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < n; i++)
	{
		printf("%lu", fib[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * This program demonstrates the printFibonacci function by printing the
 * first 50 Fibonacci numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	printFibonacci(50);
	return (0);
}
