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
		_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
