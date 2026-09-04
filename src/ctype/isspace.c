#include <ctype.h>
#undef isspace

int isspace(int ch)
{
	unsigned char c = ch;
	return (c == ' ') || (c - '\t' >= 0 && c - '\t' < 5);
}
