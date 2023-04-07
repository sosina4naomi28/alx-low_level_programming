#include "main.h"

/**
 * get_endianness - checkesif  amachine is big or small
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*) & i;

	return (*c);
}
