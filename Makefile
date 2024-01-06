NAME = libs42.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_atoi.c ft_isascii.c ft_lstadd_front.c ft_lstmap.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c ft_bzero.c ft_isdigit.c ft_lstclear.c ft_lstnew.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_calloc.c ft_isprint.c ft_lstdelone.c ft_lstsize.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_itoa.c ft_lstiter.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c get_next_line_bonus.c ft_isalpha.c ft_lstadd_back.c ft_lstlast.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c get_next_line_utils_bonus.c ft_printf.c print_idu.c print_ptr.c print_s.c print_xX.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all

# NAME = libs42.a
# CC = cc
# CFLAGS = -Wall -Werror -Wextra
# SRC = ft_atoi.c ft_isascii.c ft_lstadd_front.c ft_lstmap.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c ft_bzero.c ft_isdigit.c ft_lstclear.c ft_lstnew.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_calloc.c ft_isprint.c ft_lstdelone.c ft_lstsize.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_itoa.c ft_lstiter.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c get_next_line_bonus.c ft_isalpha.c ft_lstadd_back.c ft_lstlast.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c get_next_line_utils_bonus.c ft_printf.c print_idu.c print_ptr.c print_s.c print_xX.c

# all: $(NAME)

# $(NAME): 
# 	@$(CC) $(CFLAGS) -c $(SRC)
# 	@ar rcs $(NAME) $(patsubst %.c,%.o,$(SRC))

# clean:
# 	@rm -f $(patsubst %.c,%.o,$(SRC))

# fclean: clean
# 	@rm -f $(NAME)

# re: fclean all

# .PHONY: clean fclean re all