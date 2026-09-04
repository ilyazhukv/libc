#include <ctype.h>
#undef isdigit

int isdigit(int ch)
{
	return ((unsigned char)ch - '0') < 10;
}
