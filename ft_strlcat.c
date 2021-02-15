/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcruz <pcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:20:33 by pcruz             #+#    #+#             */
/*   Updated: 2021/02/15 19:34:05 by pcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	offset;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	offset = dst_len;
	i = 0;
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] && offset != size - 1)
	{
		dst[offset] = src[i];
		offset++;
		i++;
	}
	dst[offset] = '\0';
	return (dst_len + src_len);
}
