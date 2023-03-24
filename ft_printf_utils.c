/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:28:31 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/24 17:39:40 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int a)
{
	write (1, &a, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (*str)
	{
		i += ft_putchar(*str);
		str++;
	}
	return (i);
}

int	ft_putnbr(int nb, const char *s1)
{
	int			i;
	long int	nbr;

	nbr = nb;
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i += ft_putchar('-');
	}
	if (s1[0] == '0')
		i += ft_put_zero_int(nb, &s1[0]);
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	int divisor = 1;
    while (nbr / divisor >= 10)
	{
        divisor *= 10;
    }
    while (divisor > 0)
	{
        int digit = nbr / divisor;
        ft_putchar(digit + '0');
		i++;
        nbr %= divisor;
        divisor /= 10;
    }
	return (i);
}

int	ft_put_unsigned_nbr(unsigned int nbr, const char *s1)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		ft_putstr("null");
		return (4);
	}
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nbr > 9)
	{
		i += ft_putnbr((nbr / 10), &s1[1]);
	}
	i += ft_putchar((nbr % 10) + 48);
	return (i);
}
