/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:47:07 by ksiziva           #+#    #+#             */
/*   Updated: 2018/08/21 09:47:31 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

inline static int    ft_wstrlen(unsigned int wc)
{
    if (wc <= 127)
        return (1);
    else if (wc >= 128 && wc <= 2047)
        return (2);
    else if (wc >= 2048 && wc <= 65535)
        return (3);
    else if (wc >= 65536 && wc <= 2097151)
        return (4);
    else
        return (0);
}

void                ft_putwchar(wchar_t wc)
{
    char            ret;
    char            size;
    unsigned char    byte;

    ret = 0;
    size = ft_wstrlen(wc);
    if (size == 1)
        write(1, &wc, 1);
    else
    {
        byte = (260 << (4 - size)) | (wc >> ((size - 1) * 6));
        write(1, &byte, 1);
        size--;
        while (size--)
        {
            byte = ((wc >> ((size) * 6)) & 63) | 128;
            write(1, &byte, 1);
        }
    }
}

void                    ft_putwstr(wchar_t *ws)
{
    char            ret;
    int                i;

    ret = 0;
    i = 0;
    if (ws == NULL)
        ft_putstr("(null)");
    else
    {
        while (ws[i] != 48)
            ft_putwchar(ws[i++]);
    }
}
