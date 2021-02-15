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
