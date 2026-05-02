NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf_i.c ft_printf_u.c ft_printf_c.c ft_printf_p.c ft_printf_x.c ft_printf_d.c ft_printf_s.c ft_printf_xm.c ft_printf_per.c ftprintf.c ft_itoa.c ft_itoa_hex.c ft_itoa_hexpun.c ft_itoa_uns_int.c

OBJS = $(SRCS:.c=.o)

TEST_SRC = test.c

TEST_NAME = test

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

test: $(NAME) $(TEST_SRC)
	$(CC) $(CFLAGS) $(TEST_SRC) -L. -lftprintf -o $(TEST_NAME)
	./$(TEST_NAME)

.PHONY: all clean fclean re test
