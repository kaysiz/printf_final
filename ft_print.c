/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:22:24 by kaysiz            #+#    #+#             */
/*   Updated: 2018/08/20 14:22:26 by kaysiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print(char c, va_list arg)
{
    int		res;

	res = 0;
	if (c == '%')
		ft_putchar(c);
	else if (c == 'c')
	    ft_putchar(va_arg(arg, void *));
    else if (c == 'C')
		ft_putchar_w(va_arg(arg, void *));
	else if (c == 's')
		ft_putstr(va_arg(arg, void *));
    else if (c == 'S')
		ft_putstr_w(va_arg(arg, void *));
	else if (lst->spec == 'd' || lst->spec == 'i' || lst->spec == 'D')
		res = (ft_get_handler_digit(lst, va_arg(arg, void *)));
	else if (c == 'u')
		res = (ft_get_handler_unsigned_digit(lst, va_arg(arg, void *)));
    else if (c == 'U')
		res = (ft_get_handler_unsigned_digit(lst, va_arg(arg, void *)));
	else if (c == 'x')
		res = (ft_get_handler_x(lst, va_arg(arg, void *)));
    else if (c == 'X')
		res = (ft_get_handler_x(lst, va_arg(arg, void *)));
	else if (c == 'o')
		res = (ft_get_handler_o(lst, va_arg(arg, void *)));
    else if (c == 'O')
		res = (ft_get_handler_o(lst, va_arg(arg, void *)));
	else if (lst->spec == 'p')
		res = (ft_get_handler_ptr(lst, va_arg(arg, void *)));
	else
		res = (ft_get_handler_char(lst, va_arg(arg, void *)));
	ft_strdel(&(lst->flags));
	return (res);
}