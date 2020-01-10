NAME = libftprintf.a

CFLAGS = -c -I -Wall -Wextra -Werror

NORMINETTE = norminette

FUN_PRINT = ft_printf.c check_flags.c ft_convert_hexa.c  display_d.c display_c.c \
			display_s.c ft_flags.c ft_width.c ft_type.c ft_conversion.c ft_punt.c \
			ft_precision.c display_u.c ft_itoi.c ft_put_spaces.c ft_total.c ft_putzeros.c \
			display_hexa.c ft_convert_hexa_neg.c ft_atoa.c display_p.c ft_convert_memory.c \
			ft_put_precision.c display_0.c

FUN_LIB = ./libft/ft_putchar_fd.c ./libft/ft_putnbr_fd.c ./libft/ft_putstr_fd.c \
			./libft/ft_atoi.c ./libft/ft_substr.c ./libft/ft_strlen.c ./libft/ft_itoa.c \
			./libft/ft_tolower.c ./libft/ft_toupper.c

OBJS_PRINT = ft_printf.o check_flags.o ft_convert_hexa.o display_d.o display_c.o \
			display_s.o ft_flags.o ft_width.o ft_type.o ft_conversion.o ft_punt.o \
			ft_precision.o display_u.o ft_itoi.o ft_put_spaces.o ft_total.o ft_putzeros.o \
			display_hexa.o ft_convert_hexa_neg.o ft_atoa.o display_p.o ft_convert_memory.o \
			ft_put_precision.o display_0.o

OBJS_LIB = ./libft/ft_putchar_fd.o ./libft/ft_putnbr_fd.o ./libft/ft_putstr_fd.o \
			./libft/ft_atoi.o ./libft/ft_substr.o ./libft/ft_strlen.o ./libft/ft_itoa.o \
			./libft/ft_tolower.o ./libft/ft_toupper.o

all: $(NAME)

$(NAME): $(OBJS_PRINT) $(OBJS_LIB) lib_ft_printf.h ./libft/libft.h
	@gcc $(CFLAGS) $(FUN_PRINT) $(FUN_LIB)
	@ar rc $(NAME) $(OBJS_PRINT) $(OBJS_LIB)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS_PRINT) $(OBJS_LIB) *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

norminette:
	@$(NORMINETTE) $(FUN_PRINT) lib_ft_printf.h