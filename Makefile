NAME = libftprintf.a

CFLAGS = -c -I -Wall -Wextra -Werror

NORMINETTE = norminette

FUN_PRINT = ft_printf.c check_flags.c ft_convert_hexa.c  display_d.c display_c.c \
			display_s.c ft_flags.c ft_width.c ft_type.c ft_conversion.c ft_punt.c \
			ft_precision.c display_u.c ft_itoi.c ft_put_spaces.c ft_total.c ft_putzeros.c \
			display_hexa.c ft_putzeros_char.c ft_atx.c ft_put_spaces_char.c ft_convert_hexa_neg.c \
			ft_atoa.c

FUN_LIB = ../Libreria/ft_putchar_fd.c ../Libreria/ft_putnbr_fd.c ../Libreria/ft_putstr_fd.c \
			../Libreria/ft_atoi.c ../Libreria/ft_substr.c ../Libreria/ft_strlen.c \
			../Libreria/ft_itoa.c ../Libreria/ft_tolower.c ../Libreria/ft_toupper.c

OBJS_PRINT = ft_printf.o check_flags.o ft_convert_hexa.o display_d.o display_c.o \
			display_s.o ft_flags.o ft_width.o ft_type.o ft_conversion.o ft_punt.o \
			ft_precision.o display_u.o ft_itoi.o ft_put_spaces.o ft_total.o ft_putzeros.o \
			display_hexa.o ft_putzeros_char.o ft_atx.o ft_put_spaces_char.o ft_convert_hexa_neg.o \
			ft_atoa.o

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
	$(NORMINETTE) $(FUN_PRINT) lib_ft_printf.h