#include "main.h"

/**
 * get_endianness - checks the endianness.
 * 
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */

int get_endianness(void)

{
	int num = 1;
        char *endian = (char *)&num;

	if (*endian  == 1)
	        return (1);
	return (0);
}
