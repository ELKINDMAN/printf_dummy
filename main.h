#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/* structs for _printf.c */
typedef struct
{
	char specifier;
	int (*helpfx)(va_list);
} hastro;

/* The main prototype for printf */

int _printf(const char *format, ...);

/* helper functions for the printf function */

int kind_pstr(va_list elkind);
int hastro_pchcar(va_list elkind);
int hastro_int(va_list elkind);
void helkanah_int(int _int);
int our_int_len(int k_int);
int kanah_int(va_list elkind);

/* int kind_pcnt(elkind); */

int _ourputchar(char c);

#endif
