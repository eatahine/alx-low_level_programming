#include "main.h"
#include <stdio.h>
/**
* main - prints upper case of a character
*
* return - 1 if uppercase, 0 if lower case
*/

int _isupper(int c)
{

	for(c = 'a'; c <= 'z'; c++)
	{
		for(c = 'A'; c <= 'Z'; c++)
		{_putchar(c);
		return(1);
		}

	_putchar(c);
	return(0);
	}
}
