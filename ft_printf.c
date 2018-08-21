/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:02:43 by kaysiz            #+#    #+#             */
/*   Updated: 2018/08/20 12:02:48 by kaysiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf( const char *format, ... )
{
    va_list args;
    int i;
    int j;

    i = 0;
    j = 0;
    va_start(args, format);
    while (format[j] != '\0') 
    {
        if(format[j] == '%')
        {
            ft_conversion(format[j+1], args);
            i++;
        }
        write(1, &format[j], 1);
        j++;
        i++;
    }

    va_end(args);
    return (i);
}