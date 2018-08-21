/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:21:16 by kaysiz            #+#    #+#             */
/*   Updated: 2018/08/20 13:21:19 by kaysiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <wchar.h>

void	ft_conversion(char c, va_list va);
void    ft_print(char c, va_list arg);
void	ft_putchar(char c);
void	ft_putwchar(wchar_t c);
void	ft_putstr(char const *s);
void	ft_putwstr(wchar_t *str);
void    ft_print_nbr(va_list arg, char c);
void	ft_putnbr(int n);
void	ft_putlnbr(long int n);
void    ft_putoct(va_list arg, char c);
void	ft_printoct(int n);
void	ft_printloct(long int n);
void	ft_printuloct(unsigned long long int n);
void	print_hex(int n, char c);
void	ft_print_hex(va_list arg, char c);
void	ft_printaddr(unsigned long int n);
int		ft_printf(const char *format, ...);
#endif