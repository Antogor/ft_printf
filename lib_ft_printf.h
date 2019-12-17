/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:51 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/17 16:39:22 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_PRINTF_H
# define LIB_FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "../Libreria/libft.h"

typedef struct	s_list_print
{
	va_list		args;
	char		c;
	int			d;
	char		*s;
	int			h;

}				t_print;

int				ft_printf(const char *s, ...);
void			check_flags(const char *s, int l, t_print *type);
void			convert_hexa(int nb, char c);
void			display_d(int d);
#endif
