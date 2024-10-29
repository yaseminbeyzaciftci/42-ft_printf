NAME =	libftprintf.a

SRC	= \
ft_printf.c                \
ft_print_chars.c          \
ft_print_hex.c             \
ft_print_ptr.c             \
ft_print_signed_number.c   \
ft_print_unsigned_number.c \
ft_print_util.c

OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re
