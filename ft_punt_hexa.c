/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punt_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:38:29 by atembras          #+#    #+#             */
/*   Updated: 2023/12/13 20:57:19 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa(char *digits, unsigned long long n)
{
	unsigned int	base;
	int				ret;

	base = 16;
	ret = 0;
	if (n >= base)
		ret += ft_puthexa(digits, n / base);
	ret += ft_putchar(digits[n % base]);
	return (ret);
}

int	ft_punt_hexa(void *p)
{
	unsigned long long	pointer;
	int					l;

	l = 0;
	pointer = (unsigned long long)p;
	l += write(1, "0x", 2);
	l += ft_puthexa("0123456789abcdef", pointer);
	return (l);
}
