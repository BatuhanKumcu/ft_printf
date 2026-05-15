/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:33:40 by bakumcu           #+#    #+#             */
/*   Updated: 2026/05/15 18:33:41 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_add(void *ptr)
{
	int				count;
	unsigned long	address;

	address = (unsigned long)ptr;
	count = ft_putstr("0x");
	count += ft_print_hex(address, "0123456789abcdef");
	return (count);
}
