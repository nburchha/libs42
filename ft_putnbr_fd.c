/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:55:04 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:42:44 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

static void	rec_putnbr(unsigned int n, int fd)
{
	if (n >= 10)
		rec_putnbr(n / 10, fd);
	ft_putchar_fd((char)((n % 10) + '0'), fd);
}

/// @brief Outputs the integer ’n’ to the given file descriptor.
/// @param n The integer to output
/// @param fd  The file descriptor on which to write.
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	u_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		u_n = (unsigned int)(n * -1);
	}
	else
		u_n = (unsigned int) n;
	rec_putnbr(u_n, fd);
}
