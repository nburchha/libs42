/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:20:56 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:50:47 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

int	ft_strchr_mod(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return (i);
	return (-1);
}

/// @brief allocates, returns new string which is concatenated s1 + s2, frees s1
/// @param s1 prefix string, freed in the end
/// @param s2 suffix string
/// @return new string, NULL if the allocation fails
char	*ft_strjoin_free_s1(char *s1, char *s2)
{
	char	*newstr;
	int		i;
	int		j;

	i = 0;
	j = -1;
	if (!s1 && !s2)
		return (NULL);
	newstr = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
	if (!newstr)
	{
		if (s1 != NULL)
			free(s1);
		return (NULL);
	}
	while (s1 != NULL && s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2 != NULL && s2[++j])
		newstr[j + i] = s2[j];
	if (s1 != NULL)
		free(s1);
	return (newstr);
}

/// @brief Allocates and returns a substring from the string ’s’.
/// @param s string from which to create the substring
/// @param start index in s from where to create the substring
/// @param len maximum length of the substring, ('\0' excluded ???)
/// @return the substring or NULL if allocation fails
char	*ft_substr_mod(char *s, size_t len)
{
	char		*substr;
	int			i;

	i = 0;
	if (ft_strlen((char *)s) < (int)len)
		len = ft_strlen((char *)s);
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
	{
		if (s != NULL)
			free(s);
		return (NULL);
	}
	while (s[i] && i < (int)len)
	{
		substr[i] = s[i];
		i++;
	}
	if (s != NULL)
		free(s);
	return (substr);
}
