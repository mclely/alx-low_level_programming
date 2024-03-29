#include "main.h"

/**
 * print_binary - A number is printed that represents its binary form.
 * @n: The binary form of the number to be printed.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
