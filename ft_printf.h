/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:09:56 by bakumcu           #+#    #+#             */
/*   Updated: 2026/05/15 18:23:30 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_printf(const char *format, ...);
int		ft_putstr(const char *str);
int		ft_printint(int n);
int		ft_printuint(unsigned int n);
int		ft_putnbr_base(int nbr, char *base);
int		ft_print_hex(unsigned long n, const char *base);
int		ft_print_add(void *ptr);

#endif
