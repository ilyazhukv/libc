#include <string.h>

void *memchr(const void *ptr, int ch, size_t n)
{
	const unsigned char *p = ptr;
	unsigned char c = ch;
	while (n--) {
		if (*p == c) {
			return (char *)p;
		}
		p++;
	}

	return NULL;
}
