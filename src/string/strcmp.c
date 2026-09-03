#include <string.h>

int strcmp(const char *lhs, const char *rhs)
{
	while (*lhs++ == *rhs++ && *lhs);
	return *lhs - *rhs;
}
