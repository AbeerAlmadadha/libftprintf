CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c helper_ft_1.c helper_ft_2.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
