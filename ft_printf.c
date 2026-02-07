/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:55:26 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/07 15:22:33 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_type(const char *format, va_list ap)
{
	int	type;

	type = 0;
	if (*format == 'c')
		type += ft_putchar((char)va_arg(ap, int));
	else if (*format == 's')
		type += ft_putstr(va_arg(ap, char *));
	else if (*format == 'p')
		type += wrtp(va_arg(ap, void *));
	else if (*format == 'i' || *format == 'd')
		type += ft_putnbr(va_arg(ap, int));
	else if (*format == 'u')
		type += ft_putnbr_basever2((unsigned int)va_arg(ap, unsigned int),
				"0123456789");
	else if (*format == 'x')
		type += ft_putnbr_basever2((unsigned int)va_arg(ap, unsigned int),
				"0123456789abcdef");
	else if (*format == 'X')
		type += ft_putnbr_basever2((unsigned int)va_arg(ap, unsigned int),
				"0123456789ABCDEF");
	else if (*format == '%')
		type += write(1, "%", 1);
	return (type);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		// we check if it is formatted first if not we just stdout normally
	}
	

	va_end(args);
}