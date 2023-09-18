#ifndef MAIN_H
#define MAIN_H

/* The main prototype for printf */

int _printf(const char *format, ...);

/* helper functions for the printf function */

int kind_pstr(va_list elkind);
int hastro_pchcar(va_list elkind);

/* int kind_pcnt(elkind); */

int _putchar(char c);

#endif
