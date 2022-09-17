#include "main.h"

/**
 *  * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	char i;
	int l;

	for (l = 1; l <= 10; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}
