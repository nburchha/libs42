/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs42.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:00:59 by nburchha          #+#    #+#             */
/*   Updated: 2024/01/14 18:05:45 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBS42_H

# define LIBS42_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdint.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//libft
int			ft_isalnum(char c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isdigit(int c);
void		*ft_memset(void *b, int c, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
int			ft_strlen(const char *str);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		**ft_split(char const *s, char c);
void		free_split(char **split);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int			ft_count_digits(unsigned int n);

//get_next_line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char		*get_next_line(int fd);
int			ft_strchr_mod(const char *s, int c);
char		*ft_strjoin_free_s1(char *s1, char *s2);
char		*ft_substr_mod(char *s, size_t len);

//ft_printf
int			ft_printf(const	char *str, ...);
int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putnbr(int n);
int			ft_putunbr(unsigned int n);
int			ft_puthex_lowercase(unsigned long nbr);
int			ft_puthex_uppercase(unsigned long nbr);
int			ft_put_ptr(void *p);
#endif