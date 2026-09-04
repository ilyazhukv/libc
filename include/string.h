#ifndef _STRING_H
#define _STRING_H

#include <stddef.h>

void *memchr(const void *ptr, int ch, size_t n);
int memcpm(const void *lhs, const void *rhs, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *dest, int ch, size_t n);
char *strchr(const char *str, int ch);
int strcmp(const char *lhs, const char *rhs);
char *strcpy(char *dest, const char *src);
size_t strlen(const char *str);

#endif
