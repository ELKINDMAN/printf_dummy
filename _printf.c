#include"main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: parameter that points to the string argument given to the function
 * Description: a function that takes a format string and outputs it to stdout.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	size_t k, s;
	int chars_prntd = 0;

	typedef struct
	{
		char specifier;
		void (*helpfx)(va_list);
	} hastro;

	hastro kind[] = 
	{
		{'s', kind_pstr},
		{'c', hastro_pchcar},
		{'d', hastro_int},
	};

	va_list(elkind);
	va_start(elkind, format);

	for (k = 0; format[k] != '\0'; k++)
	{
		format++;
		while (format)
		{
			if (format[k] == '%')
			{
				k++;
				
				if (format[k] == '%')
				{
					_putchar('%');
					chars_prntd++;
				}
				else if (format[k] == 'c')
				{
					kind[1].helpfx(elkind);
					chars_prntd ++;
				}
				else if (format[k] == 's')
				{
					kind[0].helpfx(elkind);
					chars_prntd + wds;
				}
				else if (format[k] == 'd' || 'i')
				{
					kind[2].helpfx(elkind);
					chars_prntd++;
				}
			}
			else
			{
				_putchar(format[k]);
				chars_prntd++;
			}
		}
	}
}
