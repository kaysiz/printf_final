/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:15:17 by ksiziva           #+#    #+#             */
/*   Updated: 2018/08/22 15:15:21 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check(char *str, char c)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] ==  c)
            return (1);
        i++;
    }
    return (0);
}

static void	ft_undefined()
{
	write(1, "undefined", 9);
}

void    ft_conversion(char c, va_list arg)
{
	if (check("sSpdDioOuUxXcC", c))
        ft_print(c, arg);
	else if(c == '%')
        ft_putchar(c);
    else
		ft_undefined();
}
