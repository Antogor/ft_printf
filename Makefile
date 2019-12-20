NAME = libftprintf.a

CFLAGS = -c -I -Wall -Wextra -Werror

NORMINETTE = norminette

FUN_PRINT = ft_printf.c check_flags.c convert_hexa.c  write_case.c display_d.c display_c.c \
			display_s.c

FUN_LIB = ../Libreria/ft_putchar_fd.c ../Libreria/ft_putnbr_fd.c ../Libreria/ft_putstr_fd.c \
			../Libreria/ft_atoi.c ../Libreria/ft_substr.c ../Libreria/ft_strlen.c \
			../Libreria/ft_itoa.c ../Libreria/ft_tolower.c ../Libreria/ft_toupper.c

OBJS_PRINT = ft_printf.o check_flags.o convert_hexa.o write_case.o  display_d.o display_c.o \
			display_s.o

OBJS_LIB = ../Libreria/ft_putchar_fd.o ../Libreria/ft_putnbr_fd.o ../Libreria/ft_putstr_fd.o \
			../Libreria/ft_atoi.o ../Libreria/ft_substr.o ../Libreria/ft_strlen.o \
			../Libreria/ft_itoa.o ../Libreria/ft_tolower.o ../Libreria/ft_toupper.o

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

norminette: 
	$(NORMINETTE) $(FUN_PRINT)