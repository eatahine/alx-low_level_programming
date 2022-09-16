#include "main.h"

/**
* main - prints upper case of a character
*
* return - 1 if uppercase, 0 if lower case
*/

int _isupper(int c)
{

	if(c >= 'a' && c <= 'z')
	{
	_putchar(c);
	return(0);
	}
	else if(c >= 'A' && c <= 'Z')
	{
	_putchar(c);
	return(1);
	}
}

