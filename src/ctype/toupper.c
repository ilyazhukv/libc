#include <ctype.h>

int toupper(int ch)
{
	unsigned char c = ch;
	if (c - 'a' >= 0 && c - 'a' < 26) {
		return c - ('a' - 'A');
	}

	return c;
}
