#include <stdio.h>
#include <stdlib.h>

/**
 * fibonacci_sequence - Generates Fibonacci sequence up to n numbers
 * @n: The number of Fibonacci numbers to generate
 *
 * Return: An array containing the Fibonacci sequence
 */
int *fibonacci_sequence(int n)
{
	int *sequence;
	int i;

	if (n <= 0)
		return (NULL);

	sequence = malloc(n * sizeof(int));
	if (sequence == NULL)
		return (NULL);

	sequence[0] = 1;
	if (n > 1)
		sequence[1] = 2;

	for (i = 2; i < n; i++)
		sequence[i] = sequence[i - 1] + sequence[i - 2];

	return (sequence);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int *fibonacci_numbers;
	int i;

	fibonacci_numbers = fibonacci_sequence(98);
	if (fibonacci_numbers == NULL)
	{
		printf("Failed to generate Fibonacci sequence.\n");
		return (1);
	}

	for (i = 0; i < 98; i++)
	{
		printf("%d", fibonacci_numbers[i]);
		if (i != 97)
			printf(", ");
	}

	printf("\n");
	free(fibonacci_numbers);

	return (0);
}
