/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_ft_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <aalmadad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:34:40 by aalmadad          #+#    #+#             */
/*   Updated: 2024/09/26 21:04:55 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_putnbr2(unsigned int n)
// {
// 	char	c;
// 	int		x;

// 	x = 0;
// 	if (n > 9)
// 	{
// 		x += ft_putnbr2(n / 10);
// 		n = n % 10;
// 	}
// 	c = (n + '0');
// 	x += write(1, &c, 1);
// 	return (x);
// }

int	ft_putnbr2(unsigned int n)
{
	int		x;

	x = 0;
	if (n > 9)
		x += ft_putnbr2(n / 10);
	x += ft_putchar(n % 10 + '0');
	return (x);
}

int	ft_puthex(unsigned int n)
{
	int		x;
	char	*s;

	s = "0123456789abcdef";
	x = 0;
	if (n >= 16)
		x += ft_puthex(n / 16);
	x += ft_putchar(s[n % 16]);
	return (x);
}

int	ft_puthex2(unsigned int n)
{
	int		x;
	char	*s;

	s = "0123456789ABCDEF";
	x = 0;
	if (n >= 16)
		x += ft_puthex2(n / 16);
	x += ft_putchar(s[n % 16]);
	return (x);
}

int	ft_puthex3(unsigned long n)
{
	int		x;
	char	*s;

	s = "0123456789abcdef";
	x = 0;
	if (n >= 16)
		x += ft_puthex3(n / 16);
	x += ft_putchar(s[n % 16]);
	return (x);
}

int	ft_pointer_hex(void *s)
{
	unsigned long	n;

	if (!s)
		return (ft_putstr("(nil)"));
	n = (unsigned long)s;
	ft_putstr("0x");
	return (ft_puthex3(n) + 2);
}

// int	ft_puthex(unsigned int n)
// {
// 	char	*s;
// 	char	h[50];
// 	int		i;
// 	int		x;
// 	int		len;

// 	i = 0;
// 	x = 0;
// 	s = "0123456789abcdef";
// 	if (n == 0)
// 		return (ft_putchar('0'));
// 	while (n != 0)
// 	{
// 		i = n % 16;
// 		ft_putchar(s[i]);
// 		// h[x++] = s[i];
// 		n = n / 16;
// 	}
// 	h[x] = '\0';
// 	len = ft_strlen(h);
// 	i = len;
// 	while (len)
// 		write(1, &h[--len], 1);
// 	return (i);
// }

// int	ft_puthex2(unsigned int n)
// {
// 	char	*s;
// 	char	h[50];
// 	int		i;
// 	int		x;
// 	int		len;

// 	i = 0;
// 	x = 0;
// 	s = "0123456789ABCDEF";
// 	if (n == 0)
// 		return (ft_putchar('0'));
// 	while (n != 0)
// 	{
// 		i = n % 16;
// 		h[x++] = s[i];
// 		n = n / 16;
// 	}
// 	h[x] = '\0';
// 	len = ft_strlen(h);
// 	i = len;
// 	while (len)
// 		write(1, &h[--len], 1);
// 	return (i);
// }

// int main ()
// {
// 	printf("%x\n" , -16);
// 	printf("%X\n" , -16);
// 	printf("%d",ft_puthex2(-16));
// }
