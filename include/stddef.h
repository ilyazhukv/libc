#ifndef _STDDEF_H
#define _STDDEF_H

typedef __PTRDIFF_TYPE__ ptrdiff_t;
typedef __SIZE_TYPE__ size_t;

#define NULL ((void *)0)
#define offsetof(type, member) __builtin_offsetof(type, member)
#endif
