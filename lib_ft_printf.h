

#ifndef LIB_FT_PRINTF_H
# define LIB_FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

typedef struct ar_printf
{
	int len;
	int fd;
	char *s;
} t_list;

int		ft_printf(const char *s, ...);
int		check_flags(const char *s, ...);
#endif