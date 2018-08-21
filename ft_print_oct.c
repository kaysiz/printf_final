/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_oct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 15:53:33 by kaysiz            #+#    #+#             */
/*   Updated: 2018/08/21 15:53:35 by kaysiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putoct(va_list arg, char c)
{
    if(c == 'o')
        ft_printoct(va_arg(arg, unsigned int));
    else
        ft_printloct(va_arg(arg, unsigned long int));
}

void	ft_printoct(int n)
{
	unsigned int nb;

	nb = n;
	if (nb >= 8)
	{
		ft_printoct(nb / 8);
		ft_printoct(nb % 8);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_printloct(long int n)
{
	unsigned long int nb;

	nb = n;
	if (nb >= 8)
	{
		ft_printloct(nb / 8);
		ft_printloct(nb % 8);
	}
	else
		ft_putchar(nb + 48);
}