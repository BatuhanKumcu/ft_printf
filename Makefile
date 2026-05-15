NAME = libftprintf.a
SRCS = ft_putchar.c ft_printint.c ft_printuint.c ft_putstr.c ft_printf.c ft_putnbr_base.c ft_print_hex.c ft_print_add.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

.c.o :
	$(CC) -c $(CFLAGS) $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
