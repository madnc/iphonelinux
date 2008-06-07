#ifndef UTIL_H
#define UTIL_H

#include "openiboot.h"
#include <stdarg.h>

void* memset(void* x, int fill, uint32_t size);
void* memcpy(void* dest, const void* src, uint32_t size);
int strlen(const char* str);
int putchar(int c);

#include "printf.h"

#endif