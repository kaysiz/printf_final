/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 14:41:04 by kaysiz            #+#    #+#             */
/*   Updated: 2018/08/21 14:41:06 by kaysiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

void	ft_putlnbr(long int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putlnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putlnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

void	ft_putulnbr(unsigned long int n)
{
	if (n >= 10)
	{
		ft_putulnbr(n / 10);
		ft_putulnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void    ft_print_nbr(va_list arg, char c)
{
    if(c ==  'i' || c == 'd')
        ft_putnbr(va_arg(arg, int));
    else if(c == 'U')
		ft_putulnbr(va_arg(arg, unsigned long int));
	else if(c == 'u')
		ft_putulnbr(va_arg(arg, unsigned int));
	else
        ft_putlnbr(va_arg(arg, long int));
}