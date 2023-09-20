#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
 * our_int_len - This function gives the integer lenght
 *
 * @k_int: This is the parameter for the integer lenght
 *
 * Return: Gives the value of the integer lenght
 */

int our_int_len(int k_int)
{
	int our_len = 0;

	while (k_int > 0)
	{
		our_len++;
		k_int /= 10;
	}
	return (our_len);
}

/**
 * our_octa - This function prints octadecimal numbers
 *
 * @h_octa: The parameter
 *
 * Return: Gives the octal number as output
 */

unsigned int our_octa(unsigned int h_octa)
{
	int sum = 1;

	for (; h_octa > 0; h_octa /= 8)
		sum++;
	return (sum);
}

/**
 * prt_octa - This function prints octaldecimal integers
 *
 * @_octa: This parameter takes in an input
 *
 * Return: void
 */

void prt_octa(unsigned int _octa)
{
	if (_octa == 0)
	{
		_ourputchar('0');
		return;
	}

	if (_octa != 0)
	{
		prt_octa(_octa / 8);
		_ourputchar('0' + (_octa % 8));
	}
}
