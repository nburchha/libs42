/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:19:20 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:20 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		cc;
	const unsigned char	*cs;
	size_t				i;

	cc = (unsigned char) c;
	cs = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == cc)
			return ((void *)(cs + i));
		i++;
	}
	return (NULL);
}
