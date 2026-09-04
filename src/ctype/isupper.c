#include <ctype.h>
#undef isupper

int isupper(int ch)
{
	unsigned char c = ch;
	return (c - 'A' >= 0 && c - 'A' < 26);
}
