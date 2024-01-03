/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:19:29 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/03 23:50:31 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs42.h"

int	read_chars(char **save_read, int fd);
int	check_leftover_and_read(char **save_read, char **leftover, int fd);

char	*get_next_line(int fd)
{
	char		*save_read;
	static char	*leftover[1024];
	int			chars_read;

	if (check_leftover_and_read(&save_read, &leftover[fd], fd) == 1)
		return (free(save_read), NULL);
	chars_read = BUFFER_SIZE;
	while (ft_strchr_mod(save_read, '\n') == -1 && chars_read > 0)
	{
		chars_read = read_chars(&save_read, fd);
		if (chars_read == -1)
			return (NULL);
	}
	if (chars_read == 0 && ft_strlen(save_read) == 0)
		return (NULL);
	else if (chars_read == 0)
		return (save_read);
	if (ft_strchr_mod(save_read, '\n') >= 0 && ft_strchr_mod(save_read, '\n') \
	!= ft_strlen(save_read) - 1)
		leftover[fd] = ft_strjoin_free_s1(NULL, save_read + \
		ft_strchr_mod(save_read, '\n') + 1);
	save_read = ft_substr_mod(save_read, ft_strchr_mod(save_read, '\n') + 1);
	return (save_read);
}

int	check_leftover_and_read(char **save_read, char **leftover, int fd)
{
	if (*leftover != NULL)
	{
		*save_read = ft_strjoin_free_s1(*leftover, NULL);
		*leftover = NULL;
	}
	else
		*save_read = NULL;
	if (read(fd, NULL, 0) == -1)
		return (1);
	return (0);
}

int	read_chars(char **save_read, int fd)
{
	char		read_buf[BUFFER_SIZE + 1];
	int			count_read;

	count_read = read(fd, read_buf, BUFFER_SIZE);
	read_buf[count_read] = '\0';
	if (count_read <= 0)
	{
		if (*save_read != NULL && count_read == -1)
		{
			free(*save_read);
			*save_read = NULL;
		}
		return (count_read);
	}
	*save_read = ft_strjoin_free_s1(*save_read, read_buf);
	if (*save_read == NULL)
		return (-1);
	return (count_read);
}
