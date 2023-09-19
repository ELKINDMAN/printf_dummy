#include "main.h"
#include <string.h>
#include <stdarg.h>

/**
 * hastro_int - This is a helper function for %i or %d
 * @elkind: variable storing the args for format
 *
 * Return: Gives va_arg (elkind) as output
 */
int hastro_int(va_list elkind)
{
	int i_len;

	i_len = _ourputchar(va_arg(elkind, int));
	return (i_len);
}

/**
* kind_pstr - Description of the function here
* @elkind: Description of the parameter here
*
* Description continued if necessary.
* Return: Description of the return value here
*/
int kind_pstr(va_list elkind)
{
	int wds = 0;
	char *str;

	str = va_arg(elkind, char*);
	wds = strlen(str);

	while (*str != '\0')
	{
		_ourputchar(*str);
		str++;
	}
	return (wds);
}

/**
 * hastro_pchcar - handles character specifier
 * @elkind: variable to be called by va_arg.
 * Return: 0 on success.
 */
int hastro_pchcar(va_list elkind)
{
	char char_in_elkind = va_arg(elkind, int);

	char_in_elkind = _ourputchar(char_in_elkind);
	return (0);
}
