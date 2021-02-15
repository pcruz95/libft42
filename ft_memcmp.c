#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *first;
	const unsigned char *second;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	while (n--)
	{
		if (*first != *second)
		{
			return (*first - *second);
		}
		else
		{
			first++;
			second++;
		}
	}
	return (0);
}
