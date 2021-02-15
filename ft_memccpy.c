/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcruz <pcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:19:28 by pcruz             #+#    #+#             */
/*   Updated: 2021/02/15 19:33:21 by pcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*dest;
	unsigned char			*source;
	unsigned char			*c1;
	size_t					i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	c1 = 0;
	while (i < n && c1 == 0)
	{
		dest[i] = source[i];
		if (source[i] == ((unsigned char)c))
		{
			c1 = dest + i + 1;
			break ;
		}
		i++;
	}
	return ((void *)c1);
}
