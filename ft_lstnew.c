/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:49:40 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:12 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Allocates (with malloc(3)) and returns a new node.
/// The member variable ’content’ is initialized with
/// the value of the parameter ’content’. The variable
/// ’next’ is initialized to NULL.
/// @param content The content to create the node with
/// @return The new node
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	int	i;
// 	t_list *lst;

// 	i = 2;
// 	lst = ft_lstnew("hallo");
// 	printf("%s", lst->content);
// 	free(lst);
// 	return (0);
// }