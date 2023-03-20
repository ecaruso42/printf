/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:47:11 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/10 17:18:39 by ecaruso          ###   ########.fr       */
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
	else if (n > 9)
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

int	ft_print_lowc_nbr_hex(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (nbr > 15)
	{
		ft_print_lowc_nbr_hex(nbr / 16);
		ft_print_lowc_nbr_hex(nbr % 16);
	}
	else if (nbr > 9)
	{
		ft_putchar (nbr - 10 + 'a');
	}
	if (nbr <= 9)
	{
		ft_putchar (nbr + 48);
	}
	count += ft_count16(nbr);
	return (count);
}

int	ft_print_uppc_nbr_hex(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (nbr > 15)
	{
		ft_print_uppc_nbr_hex(nbr / 16);
		ft_print_uppc_nbr_hex(nbr % 16);
	}
	else if (nbr > 9)
	{
		ft_putchar (nbr - 10 + 'A');
	}
	if (nbr <= 9)
	{
		ft_putchar (nbr + 48);
	}
	count += ft_count16(nbr);
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
