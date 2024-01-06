/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:26:54 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/06 14:31:36 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

/// @brief counts how many pointers are needed in pointer array
static int	count_words(const char *s, char delim)
{
	int				i;
	int				count;
	int				flag;

	i = 0;
	count = 0;
	flag = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != delim && (i == 0 || s[i - 1]) && flag == 0)
			flag = ++count;
		if (s[i] == delim && flag != 0)
			flag = 0;
		i++;
	}
	return (count);
}

/// @brief gets start point of string to be split,
/// determines end point by the next delim in s
/// @return splitted string
static char	*make_split_str(const char *s, char delim, int *i)
{
	size_t	size;

	size = *i;
	while (s[*i] != delim && s[*i])
		*i += 1;
	*i -= 1;
	return (ft_substr(s, size, *i - size + 1));
}

/// @brief frees the 2d array in case of a allocation fail
void	free_split(char **split)
{
	int	i;

	i = 0;
	if (split == NULL)
		return ;
	while (split[i])
	{
		free(split[i]);
		split[i] = NULL;
		i++;
	}
	free(split);
	split = NULL;
}

/// @brief Allocates (with malloc(3)) and returns an array
/// of strings obtained by splitting ’s’ using the
/// character ’c’ as a delimiter. The array must end
/// with a NULL pointer.
/// @param s The string to be split.
/// @param c The delimiter character.
/// @return The array of new strings resulting from the split.
/// NULL if the allocation fails.
char	**ft_split(char const *s, char c)
{
	int				word_count;
	char			**result;
	int				i;
	int				j;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = ft_calloc(word_count + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	result[word_count] = NULL;
	while (s[++i] && j < word_count)
	{
		if (s[i] != c)
		{
			result[j++] = make_split_str(s, c, &i);
			if (!result[j - 1])
				return (free_split(result), NULL);
		}
	}
	return (result);
}

// int	main(void)
// {
// 	char	**tab;
// 	tab = ft_split("tripouille", 0);
// 	printf("%s \n", *tab);
// }
