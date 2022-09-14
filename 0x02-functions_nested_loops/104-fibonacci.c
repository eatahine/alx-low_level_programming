#include <stdio.h>
#include "main.h"

/**
 * * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * *        separated by a comma followed by a space.
 * *
 * * Return: Always 0.
 */
int main(void)
{
	int l;
	unsigned long n1 = 0, n2 = 1, sum;

	for (l = 0; l < 98; l++)
	{
	sum = n1 + n2;
	printf("%lu", sum);
	n1 = n2;
	n2 = sum;
		if (l == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
