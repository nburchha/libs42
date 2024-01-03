/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:03:17 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:41:57 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Takes as a parameter a node and frees the memory of the node’s
/// content using the function ’del’ given as a parameter and free the node.
/// The memory of ’next’ must not be freed.
/// @param lst The node to free.
/// @param del  The address of the function used to delete the content.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

// void freeList(t_list *head)
//{if (head) freeList((t_list *)head->next); free(head);}

// int main(void)
// {
// 	t_list * l =  ft_lstnew(malloc(1));
// 	ft_lstdelone(l, free); l = 0;
// 	if (!l)
// 		printf("%p", l);
// 	write(1, "\n", 1);
// 	return (0);
// }