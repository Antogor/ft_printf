NAME = libftprintf.a

CFLAGS = -c -I -Wall -Wextra -Werror

FUN_PRINT = ft_printf.c check_flags.c convert_hexa.c  write_case.c display_d.c display_c.c \

FUN_LIB = ../Libreria/ft_putchar_fd.c ../Libreria/ft_putnbr_fd.c ../Libreria/ft_putstr_fd.c \
			../Libreria/ft_atoi.c ../Libreria/ft_substr.c ../Libreria/ft_strlen.c \
			../Libreria/ft_itoa.c

OBJS_PRINT = ft_printf.o check_flags.o convert_hexa.o write_case.o  display_d.o display_c.o \

OBJS_LIB = ../Libreria/ft_putchar_fd.o ../Libreria/ft_putnbr_fd.o ../Libreria/ft_putstr_fd.o \
			../Libreria/ft_atoi.o ../Libreria/ft_substr.o ../Libreria/ft_strlen.o \
			../Libreria/ft_itoa.o display_c.o

all: $(NAME)

$(NAME): $(OBJS_PRINT) $(OBJS_LIB) lib_ft_printf.h ../Libreria/libft.h
	@gcc $(CFLAGS) $(FUN_PRINT) $(FUN_LIB)
	@ar rc $(NAME) $(OBJS_PRINT) $(OBJS_LIB)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS_PRINT) $(OBJS_LIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all