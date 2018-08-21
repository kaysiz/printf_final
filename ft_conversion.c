/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:03:07 by kaysiz            #+#    #+#             */
/*   Updated: 2018/08/20 14:03:09 by kaysiz           ###   ########.fr       */
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

void    ft_get_conversion(char c, va_list va)
{
    char conv;
	if (check("%sSpdDioOuUxXcC", c))
    {
        conv = c;
        ft_print(c, va);
    }
	else
		ft_undefined();
}