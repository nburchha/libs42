/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:56:29 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:41:53 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Deletes and frees the given node and every successor of that node,
/// using the function ’del’ and free(3). Finally, the pointer to the list must
/// be set to NULL.
/// @param lst The address of a pointer to a node.
/// @param del The address of the function used to delete the content of the
/// node.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst != NULL)
	{
		tmp = (*lst);
		(*lst) = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
	lst = NULL;
}

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew(ft_strdup("1.node"));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("2.node")));
// 	printf("%s\n", (lst->next)->content);
// 	ft_lstclear(&lst, free);
// 	return (0);
// }