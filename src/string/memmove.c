#include <string.h>

void *memmove(void *dest, const void *src, size_t n)
{
	if (dest > src) {
		unsigned char *d = dest + n - 1;
		const unsigned char *s = src + n - 1;
		while (n--) {
			*d-- = *s--;
		}
	} else {
		unsigned char *d = dest;
		const unsigned char *s = src;
		while (n--) {
			*d++ = *s++;
		}
	}

	return dest;
}
