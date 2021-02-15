#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buffer;

	buffer = (unsigned char *)s;
	while (n--)
	{
		if (*buffer != (unsigned char)c)
		{
			buffer++;
		}
		else
		{
			return ((void *)buffer);
		}
	}
	return (NULL);
}
