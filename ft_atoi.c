/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 00:44:20 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:41:22 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

static int	handle_whitespace(const char *str, int	*ptr_i)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (ft_isdigit(str[i]) != 1)
		sign = 0;
	*ptr_i = i;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	number;
	int	i;
	int	sign;

	number = 0;
	i = 0;
	sign = handle_whitespace(str, &i);
	while (ft_isdigit(str[i]) == 1)
		number = number * 10 + str[i++] - '0';
	number *= sign;
	return (number);
}
