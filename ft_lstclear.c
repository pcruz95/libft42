/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcruz <pcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:18:56 by pcruz             #+#    #+#             */
/*   Updated: 2021/02/15 19:32:56 by pcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*before;

	if (!*lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		before = *lst;
		*lst = before->next;
		free(before);
	}
	*lst = NULL;
}
