/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:44:23 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:31 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	given_char;

	i = 0;
	given_char = (unsigned char) c;
	while (i < len)
	{
		((char *)b)[i] = given_char;
		i++;
	}
	return (b);
}
