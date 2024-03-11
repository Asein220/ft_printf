/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:44:26 by atembras          #+#    #+#             */
/*   Updated: 2023/12/13 20:51:12 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_var(char c, va_list elements)
{
	if (c == 'c')
		return (ft_putchar(va_arg(elements, int)));
	if (c == 's')
		return (ft_putstr(va_arg(elements, char *)));
	if (c == 'p')
		return (ft_punt_hexa(va_arg(elements, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(elements, int)));
	if (c == 'u')
		return (num_sinsigned(va_arg(elements, int)));
	if (c == 'x')
		return (ft_putnbr_base_x(va_arg(elements, unsigned int)));
	if (c == 'X')
		return (ft_putnbr_base(va_arg(elements, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		counter;
	int		chars;
	va_list	args;

	counter = 0;
	chars = 0;
	va_start(args, str);
	while (str[counter])
	{
		if (str[counter] != '%')
		{
			write (1, &str[counter], 1);
			chars ++;
		}
		else
		{
			chars = chars + type_var(str[counter + 1], args);
			counter ++;
		}
		counter ++;
	}
	va_end(args);
	return (chars);
}
