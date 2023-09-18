#include "main.h"

/**
 * hastro_int - This is a helper function for %i or %d 
 *
 * Return: Gives va_arg (elkind) as output
 */

int hastro_int(va_list elkind)
{
	return va_arg(elkind, int);
}
