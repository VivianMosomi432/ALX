#include "main.h"
/**
* description: Function print_alphabet to print alphabets,in lowercase,
* followed by a new line
* Return: Always 0(Success)
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
