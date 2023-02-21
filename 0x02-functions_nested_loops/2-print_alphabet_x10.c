#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabets 10 times
 *
 * Return= Always 0
 *
 */
void print_alphabet_x10(void)
{
	int c, n;

	n = 0;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;

		_putchar('\n');
	}
}
