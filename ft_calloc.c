/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:30:16 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:48:27 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*s;
	size_t		i;

	if (size && count * size > SIZE_MAX)
		return (NULL);
	i = 0;
	s = malloc(count * size);
	if (s == NULL)
		return (NULL);
	while (i < count * size)
		s[i++] = '\0';
	return ((void *)s);
}
