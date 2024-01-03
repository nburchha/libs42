/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:39:07 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:34 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Outputs the character ’c’ to the given file
/// descriptor.
/// @param c The character to output.
/// @param fd The file descriptor on which to write.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
