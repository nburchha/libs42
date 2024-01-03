/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:43:44 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:52 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Outputs the string ’s’ to the given file descriptor.
/// @param s The string to output.
/// @param fd The file descriptor on which to write.
void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
		ft_putchar_fd(*s++, fd);
}
