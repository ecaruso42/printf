/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:47:11 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/07 17:26:08 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr < 0)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (ptr == 0)
	{
		len += ft_putstr("0x0");
		return (len);
	}
	else
	{
		len += ft_putstr("0x");
		len += ft_count16(ptr);
		ft_print_hex(ptr);
	}
	return (len);
}

int	ft_print_hex(unsigned long long n)
{
	int	count;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n > 15)
	{
		ft_print_hex(n / 16);
		ft_print_hex(n % 16);
	}
	if (n > 9)
	{
		ft_putchar(n - 10 + 'a');
	}
	if (n <= 9)
	{
		ft_putchar(n + 48);
	}
	count = ft_count16(n);
	return (count);
}

int	ft_count16(unsigned long long ptr)
{
	int	count;

	count = 0;
	while (ptr > 0)
	{
		ptr /= 16;
		count++;
	}
	return (count);
}
