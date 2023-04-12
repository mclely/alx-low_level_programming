#include "main.h"

/**
 * clear_bit - At a given index the value of a bit is set to 0.
 * @n: The bit's pointer.
 * @index: Setting the value's index  - indices commences at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
