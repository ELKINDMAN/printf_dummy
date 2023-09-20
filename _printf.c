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
		{'i', kind_dec},
		{'o', k_octa},
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
				else if (format[k] == 'o')
				{
					unsigned int k_octa = va_arg(elkind, unsigned int);
					if (k_octa == 0)
					{
						return (-1);
					}
					our_octa(k_octa);
					prt_octa(k_octa);

					chars_prntd += kind[4].helpfx(elkind);
				}
				else if (format[k] == 'd')
				{
					int hastro_int = va_arg(elkind, int);

					if (hastro_int == 0)
					{
						return (-1);
					}
					our_int_len(hastro_int);
					helkanah_int(hastro_int);
					chars_prntd += kind[2].helpfx(elkind);

				}
				else if (format[k] == 'i')
				{
					int kind_dec = va_arg(elkind, int);

					if (kind_dec == 0)
					{
						return (-1);
					}
					our_int_len(kind_dec);
					chars_prntd += kind[3].helpfx(elkind);

					helkanah_int(kind_dec);
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
