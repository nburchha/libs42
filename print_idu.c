/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_idu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:34:24 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/06 14:29:22 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

int			ft_count_digits(unsigned int n)
{
	int		i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/// @brief Outputs the unsigned integer ’n’ to the given file descriptor.
/// @param n The integer to output
int	ft_putunbr(unsigned int n)
{
	if (n >= 10)
	{
		if (ft_putunbr(n / 10) == -1)
			return (-1);
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	return (ft_count_digits(n));
}

/// @brief Outputs the integer ’n’ to the given file descriptor.
/// @param n The integer to output
/// @param fd  The file descriptor on which to write.
/// @return count of chars being written
int	ft_putnbr(int n)
{
	unsigned int	u_n;
	int				i;
	int				j;

	i = 0;
	j = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		u_n = (unsigned int)(n * -1);
		i = 1;
	}
	else
		u_n = (unsigned int) n;
	j = ft_putunbr(u_n);
	if (j == -1)
		return (-1);
	return (i + j);
}
