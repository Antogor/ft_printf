/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:41:57 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 10:42:06 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_conversion(t_printf *tab)
{
	if (tab->type == 'd' || tab->type == 'i')
		display_d(tab->d = va_arg(tab->args, int), tab);
	else if (tab->type == 'c')
		display_c(tab->c = va_arg(tab->args, int), tab);
	else if (tab->type == 's')
		display_s(tab->s = va_arg(tab->args, char *), tab);
	else if (tab->type == 'u')
		display_u(tab->u = va_arg(tab->args, unsigned int), tab);
	else if (tab->type == 'x' || tab->type == 'X')
		display_hexa(tab->hexa = va_arg(tab->args, int), tab);
	else if (tab->type == 'p')
		display_p(tab->p = va_arg(tab->args, long int), tab);
}
