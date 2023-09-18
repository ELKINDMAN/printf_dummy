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
        {'%', kind_pcnt},
        {'c', hastro_pchcar},
};

	va_list(elkind);
	va_start(elkind, format);
	for (k = 0; format[k] != '\0'; k++)
	{
		if (*format == '%')
		{
			format++;
			for (s = 0; s < sizeof(kind) / sizeof(kind[0]); s++)
			{
				if (*format == kind[s].specifier)
				{
					kind[s].helpfx(elkind);
					break;
				}
			}
		}
		else
		{
			char c = *format;

			write(1, &c, 1);
			chars_prntd++;
		}
		format++;
	}
	va_end(elkind);
	return (chars_prntd);
}
