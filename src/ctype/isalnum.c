#include <ctype.h>
#undef isalnum

int isalnum(int ch)
{
	return isalpha(ch) || isdigit(ch);
}
