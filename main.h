#ifndef MAIN_H
#define MAIN_H

/* The main prototype for printf */

int _printf(const char *format, ...);

/* helper functions for the printf function */

void kind_pstr(va_list JulienYahead);
void hastro_pchcar(va_list JulienYahead);
void kind_pcnt();


/* structures for the function */

struct hastro
{
        char specifiers;
	void (*helpfx)(va_list);
} fspec;

struct hastro kind[] = 
{
	{'s', kind_pstr},
	{'%', kind_pcnt},
	{'c', hastro_pchcar},
};

#endif
