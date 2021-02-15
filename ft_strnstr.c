/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcruz <pcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:20:55 by pcruz             #+#    #+#             */
/*   Updated: 2021/02/15 19:34:24 by pcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t l2;

	l2 = ft_strlen(s2);
	if (!l2)
		return ((char *)s1);
	while (*s1 && len >= l2)
	{
		if (!ft_strncmp(s1, s2, l2))
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
