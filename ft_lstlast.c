#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	if (lst != NULL)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
