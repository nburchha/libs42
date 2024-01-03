/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:29:59 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:28 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief copy len bytes from src to dst, handling overlapping
/// @param dst pointer to destination area
/// @param src pointer to source area
/// @param len amount of bytes to move
/// @return pointer to destination
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*castable_dst;
	const unsigned char	*castable_src;
	size_t				i;

	i = len - 1;
	if (!dst && !src)
		return (NULL);
	castable_dst = (unsigned char *)dst;
	castable_src = (const unsigned char *)src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len-- > 0)
		{
			castable_dst[i] = castable_src[i];
			i--;
		}
	}
	return (dst);
}

/*
abcd
dst = "abcd"
src = "bcd"
*/