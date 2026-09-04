#include <ctype.h>

int tolower(int ch)
{
	unsigned char c = ch;
	if (c - 'A' >= 0 && c - 'A' < 26) {
		return c + ('a' - 'A');
	}

	return c;
}
