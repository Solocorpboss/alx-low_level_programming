#include "main.h"

/**
 * *Write a function that prints the numbers, from 0 to 9, followed by a new line
 *  Prototype: void print_most_numbers(void);
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
