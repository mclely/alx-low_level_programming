#include "main.h"

/**
 * set_bit - At a given index to 1 it sets the value of a bit.
 * @n: The bit pointer.
 * @index: The value's index  - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
