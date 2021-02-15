#include "libft.h"

size_t      ft_wordlen(const char *s, char c)
{
    size_t  i;
    size_t  len;

    i = 0;
    len = 0;
    while (s[i] == c)
        i++;
    while (s[i] != c && s[i++])
        len++;
    return (len);
}

size_t      ft_wordcounter(const char *s, char c)
{
    size_t  i;
    size_t  word;

    i = 0;
    word = 0;
    while (s[i])
    {
        if (s[i] != c)
            word++;
        while (s[i] != c && s[i + 1])
            i++;
        i++;
    }
    return (word);
}

static char		*ft_nextword(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static void		ft_mallocfree(char **words, size_t pos)
{
	size_t i;

	i = 0;
	while (i <= pos)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char			**ft_split(char const *s, char c)
{
	size_t	num_words;
	char	**words;
	size_t	i;

	if (!s)
		return (NULL);
	num_words = ft_wordcounter(s, c);
	if (!(words = malloc((num_words + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < num_words)
	{
		s = ft_nextword(s, c);
		words[i] = ft_substr(s, 0, ft_wordlen(s, c));
		if (words[i] == NULL)
		{
			ft_mallocfree(words, i);
			return (NULL);
		}
		i++;
		s += ft_wordlen(s, c);
	}
	words[num_words] = NULL;
	return (words);
}
