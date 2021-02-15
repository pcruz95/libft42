/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcruz <pcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:21:05 by pcruz             #+#    #+#             */
/*   Updated: 2021/02/15 19:34:30 by pcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ch_set(char c, char const *ch)
{
	while (*ch)
	{
		if (c == *ch)
			return (1);
		ch++;
	}
	return (0);
}

static char		*null_str(char *str)
{
	if (!(str = malloc(sizeof(char) * 1)))
		return (NULL);
	str[0] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	new_start;
	size_t	new_end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ch_set(s1[i], set))
		i++;
	new_start = i;
	trimmed = NULL;
	if (new_start == ft_strlen(s1))
		return (null_str(trimmed));
	if ((i = ft_strlen(s1) - 1))
		while (i > 0 && ch_set(s1[i], set))
			i--;
	new_end = i;
	if (!(trimmed = malloc(sizeof(char) * (new_end - new_start + 2))))
		return (NULL);
	i = 0;
	while (new_start <= new_end)
		trimmed[i++] = s1[new_start++];
	trimmed[i] = '\0';
	return (trimmed);
}
