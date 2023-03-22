/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:38:22 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/22 17:01:41 by ecaruso          ###   ########.fr       */
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

int	ft_check_flags(va_list arg, va_list arg2, const char *s1)
{
	int		len;
	int		i;
	int		j;
	int		swap;
	char	*flags;

	flags = "0-.# +123456789";
	len = 0;
	i = 0;
	j = 0;
	while (flags[j] != '\0')
	{
		if (s1[i] == flags[j] && s1[i] != '-')
			len += ft_sort_flags(arg2, &s1[i]);
		swap = i;
		j++;
	}
	i += iterate_until_type(&s1[i]);
	len += ft_check_type(arg, s1[i]);
	if (s1[swap] == '-')
		len += ft_sort_flags(arg2, &s1[swap]);
	return (len);
}

int	ft_sort_flags(va_list arg2, const char *s1)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (s1[i] == '-' || (s1[i] >= '1' && s1[i] <= '9'))
		len += ft_sort_space(arg2, &s1[i]);
	return (len);
}

int	iterate_until_type(const char *s1)
{
	char	*type;
	int		i;
	int		j;

	type = "cspdiuxX%%";
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (type[j] != '\0')
		{
			if (s1[i] == type[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	i = 0;
	return (i);
}

int	ft_printf(const char *s1, ...)
{
	va_list	args;
	va_list	arg2;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s1);
	va_copy(arg2, args);
	while (s1[i])
	{
		if (s1[i] == '%')
		{
			i++;
			len += ft_check_flags(args, arg2, &s1[i]);
			i += iterate_until_type(&s1[i]);
		}
		else
			len += ft_putchar(s1[i]);
		i++;
	}
	va_end(args);
	return (len);
}
