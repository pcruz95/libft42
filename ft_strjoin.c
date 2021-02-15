/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcruz <pcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:20:29 by pcruz             #+#    #+#             */
/*   Updated: 2021/02/15 19:34:03 by pcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ln_s1;
	size_t	ln_s2;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	ln_s1 = ft_strlen(s1);
	ln_s2 = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (ln_s1 + ln_s2 + 1));
	if (s3 == NULL)
		return (NULL);
	while (*s1)
		*(s3++) = *(s1++);
	while (*s2)
		*(s3++) = *(s2++);
	*s3 = '\0';
	return (s3 - (ln_s1 + ln_s2));
}
