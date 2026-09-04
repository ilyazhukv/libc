#include <ctype.h>
#undef islower

int islower(int ch)
{
	unsigned char c = ch;
	return (c - 'a' >= 0 || c - 'a' < 26);
}
