#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		len;

	len = ft_strlen(s1) + 1;
	if ((cpy = ((char *)malloc(sizeof(char) * len))) != 0)
	{
		ft_strlcpy(cpy, s1, len);
		return (cpy);
	}
	return (0);
}
