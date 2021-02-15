#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	i = 0;
	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (u1[i] == u2[i] && u1[i] != '\0' && u2[i] != '\0' && i < n - 1)
		i++;
	return (u1[i] - u2[i]);
}
