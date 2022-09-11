#include <stdio.h>

/**
 * *main-main block
 * *Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int n2;

	for (n = 0; n < 10; n++)
	{
		for (n2 = n + 1; n2 <= 9; n2++)
		{
		putchar(n + '0');
		putchar(n2 + '0');

		if (n < 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
