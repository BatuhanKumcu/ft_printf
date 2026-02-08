/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:55:26 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/08 14:58:36 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// putcharint, putstrint, printadd, printint, printuint, printhex


static int	check_conv(va_list *args, char c)
{
	int	r;

	if (c == 'c')
		r = ft_putchar_int((char)va_arg(*args, int));
	else if (c == 's')
		r = ft_putstr_int(va_arg(*args, char *));
	else if (c == 'p')
		r = ft_print_add(va_arg(*args, void *));
	else if (c == 'i' || c == 'd')
		r = ft_print_int(va_arg(*args, int));
	else if (c == 'u')
		r = ft_print_uint(va_arg(*args, unsigned int));
	else if (c == 'X')
		r = ft_print_hex(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (c == 'x')
		r = ft_print_hex(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (c == '%')
		r = ft_putchar_int('%');
	else
		r = 0;
	return (r);
}

static int check_format(const char c)
{
    if (c == '%')
        return (1);
    return (ft_strchr("cspdiuxX", c) != NULL);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	total;
	int	check;

	total = 0;
	va_start(args, format);
	while (*format)
	{
		
		check = ft_putchar_int(*format);
		if (check == -1)
			return (va_end(args), -1);
		total += check;
		format++;
	}

	va_end(args);
}
