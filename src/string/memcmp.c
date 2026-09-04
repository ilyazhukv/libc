#include <string.h>

int memcmp(const void *lhs, const void *rhs, size_t n)
{
	const unsigned char *l = lhs;
	const unsigned char *r = rhs;
	while (n-- && *l == *r) {
		l++;
		r++;
	}

	return *l - *r;
}
