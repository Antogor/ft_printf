NAME = libftprintf.a

CFLAGS = -c -I -Wall -Wextra -Werror

FUN = ft_printf.c check_flags.c convert_hexa.c ../Libreria/ft_putchar_fd.c \
../Libreria/ft_putnbr_fd.c ../Libreria/ft_putstr_fd.c display_d.c \
../Libreria/ft_atoi.c ../Libreria/ft_substr.c ../Libreria/ft_strlen.c \
write_case.c ../Libreria/ft_itoa.c

OBJS = ft_printf.o check_flags.o convert_hexa.o ../Libreria/ft_putchar_fd.o \
../Libreria/ft_putnbr_fd.o ../Libreria/ft_putstr_fd.o display_d.o \
../Libreria/ft_atoi.o ../Libreria/ft_substr.o ../Libreria/ft_strlen.o \
write_case.o ../Libreria/ft_itoa.o


all: $(NAME)

$(NAME): $(OBJS) lib_ft_printf.h ../Libreria/libft.h
	@gcc $(CFLAGS) $(FUN)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all