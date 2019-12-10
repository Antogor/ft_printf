NAME = libftprintf.a

CFLAGS = -c -I -Wall -Wextra -Werror

FUN = ft_printf.c check_flags.c ../Libreria/ft_putchar_fd.c \
../Libreria/ft_putnbr_fd.c

OBJS = ft_printf.o check_flags.o ../Libreria/ft_putchar_fd.o \
../Libreria/ft_putnbr_fd.o


all: $(NAME)

$(NAME): $(OBJS) lib_ft_printf.h
	@gcc $(CFLAGS) $(FUN)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all