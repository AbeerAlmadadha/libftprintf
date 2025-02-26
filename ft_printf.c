/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmadad <aalmadad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:58:29 by aalmadad          #+#    #+#             */
/*   Updated: 2024/11/09 17:45:12 by aalmadad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_helper(const char *s, int i, int count, va_list ptr)
{
	if (s[i] == '%')
		count = count + ft_putchar('%');
	else if (s[i] == 'c')
		count = count + ft_putchar(va_arg(ptr, int));
	else if (s[i] == 's')
		count = count + ft_putstr(va_arg(ptr, char *));
	else if (s[i] == 'd' || s[i] == 'i')
		count = count + ft_putnbr(va_arg(ptr, int));
	else if (s[i] == 'u')
		count = count + ft_putnbr2(va_arg(ptr, unsigned int));
	else if (s[i] == 'x')
		count = count + ft_puthex(va_arg(ptr, unsigned int));
	else if (s[i] == 'X')
		count = count + ft_puthex2(va_arg(ptr, unsigned int));
	else if (s[i] == 'p')
		count = count + ft_pointer_hex(va_arg(ptr, void *));
	else
		return (-1);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			count = count + ft_putchar(s[i]);
			i++;
		}
		else if (s[i] == '%')
		{
			i++;
			count = ft_printf_helper(s, i, count, ptr);
			i++;
		}
	}
	va_end(ptr);
	return (count);
}

// int	main(void)
// {
// 	// printf(" NULL %s NULL ", NULL);
// 	// printf("%d", ft_printf(" NULL %s NULL ", NULL));

// 	//printf(" %p %p ", 0, 0);
// 	ft_printf(" %p %p ", 0, 0);
// }

// int	main(void)
// {
// 	ft_printf("cspdiuxX");
// 	// printf("cspdiuxX");
// 	ft_printf("Hello World %d\nD:%d\n", 0,-46464);
// 	printf("Hello World %d\nD:%d\n", 0,-46464);
// 	ft_printf("Character: %c\n", 'A');
// 	ft_printf("String: %s\n", "");
// 	printf("String: %s\n", "");
// 	ft_printf("Hex: %x\n", 255);
// 	printf("Hex: %x\n", 255);
// 	printf("s=%d\n",ft_printf("Pointer: %p\n", 0));
// 	// printf("s=%d\n",printf("Pointer: %p\n",0));
// 	ft_printf("%%\n");
// 	printf("%%\n");
// 	ft_printf("jdhfjdfgd%s","");
// 	printf("jdhfjdfgd%s","");
// 	return (0);
// }
