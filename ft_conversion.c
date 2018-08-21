/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:03:07 by kaysiz            #+#    #+#             */
/*   Updated: 2018/08/21 09:48:44 by ksiziva          ###   ########.fr       */
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

void    ft_get_conversion(char c, va_list arg)
{
    char conv;
	if (check("%sSpdDioOuUxXcC", c))
    {
        conv = c;
        ft_print(c, arg);
    }
	else
		ft_undefined();
}
