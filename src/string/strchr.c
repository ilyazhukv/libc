#include <string.h>

char *strchr(const char *str, int ch)
{
	unsigned char c = ch;
	for (size_t i = 0; str[i]; i++) {
		if (str[i] == c) {
			return (char *)str + i;
		}
	}

	return NULL;
}
