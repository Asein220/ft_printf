/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:28:31 by atembras          #+#    #+#             */
/*   Updated: 2023/12/13 20:51:02 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_putstr(const char *str);
int				ft_strlen(const char *str);
int				ft_putnbr(int n);
int				ft_strlen(const char *str);
int				hexa_mayus(int n);
int				hexa_min(int n);
unsigned int	num_sinsigned(unsigned int num);
void			ft_putchar_fd(char c, int fd);
int				ft_punt_hexa(void *p);
int				ft_putnbr_base_x(unsigned int nbr);
int				ft_putnbr_base(unsigned int nbr);
int				ft_putnbr_base_p(unsigned long int nbr);
#endif