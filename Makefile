NAME = libft.a

SRC = ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_strdup.c\
ft_memset.c\
ft_itoa.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_putchar_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_strchr.c\
ft_strjoin.c\
ft_strlcat.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strtrim.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c\
ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_lstnew.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstmap.c\
ft_lstiter.c\
ft_lstdelone.c\
ft_lstclear.c\
ft_lstadd_front.c\
ft_lstadd_back.c\
ft_split.c\
ft_strtrim.c\
ft_striteri.c\
ft_strmapi.c


CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:%.c=%.o)

all : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
