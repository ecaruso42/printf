/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:38:22 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/09 17:08:29 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(va_list arg, char type)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_putchar(va_arg(arg, int));
	if (type == 's')
		len += ft_putstr(va_arg(arg, char *));
	if (type == 'p')
		len += ft_putptr(va_arg(arg, unsigned long long));
	if (type == 'd' || type == 'i')
		len += ft_putnbr(va_arg(arg, int));
	return (len);
}

int	ft_printf(const char *s1, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s1);
	while (s1[i])
	{
		if (s1[i] == '%')
		{
			len += ft_check_type(args, s1[i + 1]);
			i++;
		}
		else
		{
			len += ft_putchar(s1[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
