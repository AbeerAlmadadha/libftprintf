/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:49:25 by aalmadad          #+#    #+#             */
/*   Updated: 2025/02/26 07:20:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	n_of_digits(int n);
int	ft_putnbr(int n);
int	ft_putnbr2( unsigned int n);
int	ft_puthex(unsigned int n);
int	ft_puthex2(unsigned int n);
int	ft_pointer_hex(void *s);
int	ft_puthex3(unsigned long n);

#endif
