#include <stdio.h>

/**
 **main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *   *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int n2;
	int n3;
	int n4;

	for (n = '0'; n <= '9'; n++) /*print first two digit combo*/
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = n; n3 <= '9'; n3++) /*print second of pair*/
			{
				for (n4 = n2 + 1; n4 <= '9'; n4++)
				{
				putchar(n);
				putchar(n2);
				putchar(' ');
				putchar(n3);
				putchar(n4);

					if (n != '9' || n2 != '8' || n3 != '9' || n4 != '9')
					{
					putchar(',');
					putchar(' ');
					}
				}
				n4 = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
