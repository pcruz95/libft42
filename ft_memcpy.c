#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	while (n-- && (dest != 0 || src != 0))
	{
		*dest++ = *source++;
	}
	return (dst);
}
