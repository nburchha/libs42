/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:16:35 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:41:47 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Adds the node ’new’ at the end of the list
/// @param lst The address of a pointer to the first link of a list.
/// @param new The address of a pointer to the node to be added to the list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
