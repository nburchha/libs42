/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:03:07 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:17 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Counts the number of nodes in a list.
/// @param lst The beginning of the list.
/// @return The length of the list
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	if (lst == NULL)
		return (0);
	tmp = lst;
	i = 1;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
