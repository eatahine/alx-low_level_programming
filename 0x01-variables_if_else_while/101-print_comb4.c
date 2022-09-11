#include <stdio.h>

/**
 * *main-main block
 * *Return: Always 0 (success)
 * */
int main(void)
{
	int n;
	int n2;
	int n3;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = n + 1; n2 <= '9'; n2++)
		{
			for (n3 = n2 + 1; n3 <= '9'; n3++)
			{
			putchar(n);
			putchar(n2);
			putchar(n3);
			
				if (n != '9' || n2 != '8' || n3 != '7')
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
