#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_pos;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	last_pos = ft_lstlast(*lst);
	last_pos->next = new;
}
