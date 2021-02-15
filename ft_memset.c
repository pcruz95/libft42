#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *us;

	us = (unsigned char *)b;
	while (len-- != 0)
		*(us++) = (unsigned char)c;
	return (b);
}
