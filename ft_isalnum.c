/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:32:01 by nburchha          #+#    #+#             */
/*   Updated: 2023/10/06 15:14:17 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (0);
	return (1);
}
// 48-57 65-90 97-122