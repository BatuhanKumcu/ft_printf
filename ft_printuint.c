/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:47:44 by bakumcu           #+#    #+#             */
/*   Updated: 2026/05/15 18:21:30 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	 ft_printuint(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_printuint(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
