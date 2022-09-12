#include <stdio.h>

/**
 **main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *   *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int n2;

	for (n = '0'; n <= 99; n++) /*print first two digit combo*/
	{
		for (n2 = n + 1; n2 <= 99; n2++)
		{
		putchar(n);
		putchar(n2);
		putchar(' ');
		putchar(n);
		putchar(n2);

			if (n != 99 || n2 != 98)
				{
				putchar(',');
				putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
