/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:51 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/10 16:37:12 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_PRINTF_H
# define LIB_FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "../Libreria/libft.h"

typedef struct s_convert 
{
	char c;
	int d;
	char *s;

} convert_t;

int		ft_printf(const char *s, ...);
void	check_flags(const char *s, int l, va_list args);
#endif
