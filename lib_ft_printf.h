/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:54:51 by agarzon-          #+#    #+#             */
/*   Updated: 2019/12/05 15:31:04 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_PRINTF_H
# define LIB_FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "../Libreria/libft.h"

int		ft_printf(const char *s, ...);
void	check_flags(const char *s, ...);
void	write_flags(const char *s);
#endif
