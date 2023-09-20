#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct - hastro for _printf.c
 *
 * Description will be added
 * later on
 */

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
int kind_dec(va_list elkind);

unsigned int our_octa(unsigned int h_octa);
unsigned int k_octa(va_list elkind);
void prt_octa(unsigned int _octa);

/* int kind_pcnt(elkind); */

int _ourputchar(char c);

#endif
