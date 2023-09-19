#include"main.h"
#include <stdarg.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: parameter that points to the string argument given to the function
 * Description: a function that takes a format string and outputs it to stdout.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	size_t k;
	int chars_prntd = 0;

	hastro kind[] = {

		{'s', kind_pstr},
		{'c', hastro_pchcar},
		{'d', hastro_int},
	};

	va_list(elkind);
	va_start(elkind, format);
		for (k = 0; format[k] != '\0'; k++)
		{
			if (format[k] == '%')
			{
				k++;
				if (format[k] == '%')
				{
					_ourputchar('%');
					chars_prntd++;
				}
				else if (format[k] == 'c')
				{
					kind[1].helpfx(elkind);
					chars_prntd++;
				}
				else if (format[k] == 's')
				{
					chars_prntd += kind[0].helpfx(elkind);
				}
				else if (format[k] == 'd' || format[k] == 'i')
				{
					chars_prntd += kind[2].helpfx(elkind);
				}
			}
			else
			{
				_ourputchar(format[k]);
				chars_prntd++;
			}
		}
	va_end(elkind);
	return (chars_prntd);
}
