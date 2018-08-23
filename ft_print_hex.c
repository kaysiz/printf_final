/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 17:41:19 by ksiziva           #+#    #+#             */
/*   Updated: 2018/08/23 11:34:08 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_hex(int n, char c)
{
	char m;

	if (c == 'x')
		m = 'a';
	else
		m = 'A';
	if (n >= 16)
		print_hex(n / 16, c);
	n = n % 16;
	n += n < 10 ? '0' : m - 10;
	write(1, &n, 1);
}

void		ft_printaddr(unsigned long int n)
{
	char *base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_printaddr(n / 16);
		ft_printaddr(n % 16);
	}
	else
		ft_putchar(base[n]);
}

void		ft_print_hex(va_list arg, char c)
{
	if (c == 'x' || c == 'X')
		print_hex((va_arg(arg, unsigned int)), c);
	else
		ft_printaddr(va_arg(arg, unsigned long int));
}
