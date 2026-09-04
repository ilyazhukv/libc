#include <ctype.h>
#undef isalpha

int isalpha(int ch)
{
	unsigned char c = ch;
	return (c - 'A' >= 0 && c - 'A' < 26) || (c - 'a' >= 0 && c - 'a' < 26);
}
