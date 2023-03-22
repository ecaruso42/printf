/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:03:55 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/22 17:13:14 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrcount(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	if (nbr == 0)
	{
		return (1);
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

int	ft_hex_nbrcount(long long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		return (1);
	}
	if (nbr == 0)
	{
		return (1);
	}
	while (nbr > 0)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}

int	ft_unbrcount(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	if (nbr == 0)
	{
		return (1);
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num += (str[i] - 48);
		i++;
	}
	return (num);
}
