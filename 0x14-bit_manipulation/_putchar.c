#include <unistd.h>
#include "main.h"

/**
 * _putchar - The character c is written to stdout
 * @c: The print out character
 *
 * Return: On success 1.
 * On error, return -1, and appropriate error is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
