#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (!dst || !src)
		return (0);
	while (src[len] != '\0')
		++len;
	if (len + 1 < dstsize)
		ft_memcpy(dst, src, len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len);
}
