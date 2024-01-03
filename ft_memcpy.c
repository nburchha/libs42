/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:56:10 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:25 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*casted_dst;
	char	*casted_src;

	if (!dst && !src)
		return (NULL);
	casted_dst = (char *)dst;
	casted_src = (char *)src;
	while (n > 0)
	{
		*casted_dst++ = *casted_src++;
		n--;
	}
	return (dst);
}
