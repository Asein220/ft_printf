/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_all_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:58:01 by atembras          #+#    #+#             */
/*   Updated: 2023/12/13 21:00:23 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"
#define BASE1 "0123456789ABCDEF"
#define BASE "0123456789abcdef"

int	ft_putnbr_base_x(unsigned int nbr)
{
	int		r;

	r = 1;
	if (nbr >= 16)
	{
		r += ft_putnbr_base_x(nbr / 16);
		ft_putnbr_base_x(nbr % 16);
	}
	else
		ft_putchar(BASE[nbr]);
	return (r);
}

int	ft_putnbr_base(unsigned int nbr)
{
	int		r;

	r = 1;
	if (nbr >= 16)
	{
		r += ft_putnbr_base(nbr / 16);
		ft_putnbr_base(nbr % 16);
	}
	else
		ft_putchar(BASE1[nbr]);
	return (r);
}

int	ft_putnbr_base_p(unsigned long int nbr)
{
	int		r;

	r = 1;
	if (nbr >= 16)
	{
		r += ft_putnbr_base_p(nbr / 16);
		ft_putnbr_base_p(nbr % 16);
	}
	else
		ft_putchar(BASE[nbr]);
	return (r);
}
