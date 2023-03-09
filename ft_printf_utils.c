/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:28:31 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/09 17:14:54 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int a)
{
	write (1, &a, 1);
	return (1);
}

int	ft_putstr(char	*str)
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

int	ft_putnbr(int nb)
{
	int			i;
	long int	nbr;

	nbr = nb;
	i = 0;
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		i += ft_putchar('-');
	}
	if (nbr > 9)
	{
		i += ft_putnbr(nbr / 10);
	}
	i += ft_putchar((nbr % 10) + 48);
	return (i);
}
