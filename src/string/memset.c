#include <string.h>

void *memset(void *dest, int ch, size_t n)
{
	unsigned char *d = dest;
	unsigned char c = ch;
	while (n--) {
		*d++ = c;
	}

	return dest;
}
