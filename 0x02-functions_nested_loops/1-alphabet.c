#include "main.h"

/**
 * print_alphabet - print alphabet of letters
 *
 *does not need  have a return type
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		_putchar(i);
	}
	_putchar('\n');
}
