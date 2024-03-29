/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:55:36 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:43:07 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Applies the function ’f’ on each character of
/// the string passed as argument, passing its index
/// as first argument. Each character is passed by
/// address to ’f’ to be modified if necessary.
/// @param s The string on which to iterate.
/// @param f The function to apply to each character.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
