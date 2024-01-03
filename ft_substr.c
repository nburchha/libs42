/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:40:45 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:43:46 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"
/// @brief Allocates and returns a substring from the string ’s’.
/// @param s string from which to create the substring
/// @param start index in s from where to create the substring
/// @param len maximum length of the substring, ('\0' excluded ???)
/// @return the substring or NULL if allocation fails
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = ft_calloc(len + 1, sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, &s[start], len + 1);
	return (substring);
}
