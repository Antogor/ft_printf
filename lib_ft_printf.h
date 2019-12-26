/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:51 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/20 12:15:42 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_PRINTF_H
# define LIB_FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "../Libreria/libft.h"

typedef	struct		s_list_printf
{
	va_list			args;
	int				br;
	int				d;
	int				c;
	char			*s;
	unsigned int	u;
	int				hexa;
	int				flags;
	int				punt;
	int				precision;
	int				width;
	int				atx;
	int				ali;
	int				type;
	int				len;
}					t_printf;

int					ft_printf(const char *s, ...);
int					check_flags(const char *s, t_printf *tab);
int					ft_flags(const char *s, t_printf *tab);
int					ft_punt(const char *s, t_printf *tab);
int					ft_width(const char *s, t_printf *tab, int flags);
int					ft_precision(const char *s, t_printf *tab);
int					ft_atx(const char *s, t_printf *tab);
char				ft_type(const char *s, t_printf *tab);
void				ft_conversion(t_printf *tab);
char				*ft_itoi(unsigned int n);
int					ft_total(size_t l, int tam);
void				ft_put_spaces(int nb, size_t l, t_printf *tab);
void				ft_put_spaces_char(char *s, size_t l, t_printf *tab);
void				ft_putzeros(int d, size_t l, t_printf *tab);
void				ft_putzeros_char(char *s, size_t l, t_printf *tab);
char				*ft_convert_hexa(int nb, t_printf *tab);
void				display_d(int d, t_printf *tab);
void				display_c(int c, t_printf *tab);
void				display_s(char *s, t_printf *tab);
void				display_u(unsigned int nb, t_printf *tab);
void				display_hexa(int h, t_printf *tab);
#endif
