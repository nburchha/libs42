/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:42:13 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:41:32 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief writes n zeroed bytes to the string s
/// @param s string which is written to
/// @param n how many bytes
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
