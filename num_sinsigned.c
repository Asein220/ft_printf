/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_sinsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:50:34 by atembras          #+#    #+#             */
/*   Updated: 2023/12/13 20:57:39 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	num_sinsigned(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 9)
	{
		count = num_sinsigned(num / 10);
		num = num % 10;
	}
	if (num <= 9)
	{
		ft_putchar('0' + num);
		count ++;
	}
	return (count);
}
