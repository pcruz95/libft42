/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcruz <pcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:19:43 by pcruz             #+#    #+#             */
/*   Updated: 2021/02/16 16:52:09 by pcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
	unsigned char *us;

	us = (unsigned char *)str;
	while (n-- != 0)
		*(us++) = (unsigned char)c;
	return (str);
}
