/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:11:03 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:09 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Iterates the list ’lst’ and applies the function ’f’ on the content
/// of each node. Creates a new list resulting of the successive applications
/// of the function ’f’. The ’del’ function is used to delete the content of a
/// node if needed
/// @param lst The address of a pointer to a node.
/// @param f The address of the function used to iterate on the list.
/// @param del  The address of the function used to delete the content of a
/// node if needed.
/// @return The new list. NULL if the allocation fails.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	if (lst->content == NULL)
		return (NULL);
	tmp2 = ft_lstnew(f(lst->content));
	if (tmp2 == NULL)
		return (NULL);
	tmp1 = lst->next;
	new = tmp2;
	while (tmp1 != NULL)
	{
		tmp2->next = ft_lstnew(f(tmp1->content));
		if (tmp2 == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return (new);
}
