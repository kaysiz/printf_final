/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 22:15:59 by kaysiz            #+#    #+#             */
/*   Updated: 2018/08/20 22:16:01 by kaysiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printpointinter(void *point)
{
	long	tmp;

	tmp = (long)point;
	ft_putstr("0x");
	ft_print_hex(tmp,'a');
}