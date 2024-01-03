/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:10:21 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:43:19 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief Applies the function ’f’ to each character of the
/// string ’s’, and passing its index as first argument
/// to create a new string (with malloc(3)) resulting
/// from successive applications of ’f’.
/// @param s The string on which to iterate, 
/// @param f The function to apply to each character
/// @return The string created from the successive applications of ’f’.
/// Returns NULL if the allocation fails.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ss;
	char	*result;

	i = 0;
	if (!s)
		return (NULL);
	ss = (char *)s;
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, ss[i]);
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	char	*s;

// 	s = ft_strmapi("1234", addOne);
// 	printf("%s", s);
// 	free(s);
// 	return (0);
// }