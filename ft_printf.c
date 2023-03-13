/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:38:22 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/13 20:09:51 by ecaruso          ###   ########.fr       */
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
	if (type == 'u')
		len += ft_put_unsigned_nbr(va_arg(arg, unsigned int));
	if (type == 'x')
		len += ft_print_lowc_nbr_hex(va_arg(arg, unsigned int));
	if (type == 'X')
		len += ft_print_uppc_nbr_hex(va_arg(arg, unsigned int));
	if (type == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_check_flags(va_list arg, const char *flags)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (flags[i] != '\0')
	{
		if (flags[i] == '-' || (flags[i] >= '0' && flags[i] <= '9'))
		{
			len += ft_put_space(flags);
		}
		i++;
	}
	return (len);
}
int	ft_printf(const char *s1, ...)
{
	va_list	args;
	int		i;
	int		j;
	int		len;
	char	*flags;

	flags = "O-.# +0123456789";
	i = 0;
	j = 0;
	len = 0;
	va_start(args, s1);
	while (s1[i])
	{
		if (s1[i] == '%')
		{
			i++;
			while (flags[j] != '\0')
			{
				if (s1[i] == flags[j])
				{
					len += ft_check_flags(args, &s1[i]);
					return (len);
				}
				j++;
			}
			len += ft_check_type(args, s1[i]);
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
