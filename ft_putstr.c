/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:26:31 by atembras          #+#    #+#             */
/*   Updated: 2023/12/13 20:56:16 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	len;

	if (str == NULL)
		str = "(null)";
	len = 0;
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		len++;
	}
	return (len);
}
