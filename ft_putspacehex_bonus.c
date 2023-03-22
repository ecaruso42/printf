/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putspacehex_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:09:13 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/22 17:13:11 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_space_ptr(long long ptr, const char *s1)
{
	int		i;
	int		len;
	int		l;
	char	buffer[20];

	i = 0;
	l = 0;
	len = -2;
	len -= ft_count16(ptr);
	if (s1[i] == '-')
			i++;
	while (s1[i] >= '0' && s1[i] <= '9')
		buffer[l++] = s1[i++];
	len += ft_atoi(buffer);
	i = len;
	if (i < 0)
		return (0);
	while (len > 0)
	{
		ft_putchar(' ');
		len--;
	}
	return (i);
}

int	ft_put_space_hex(unsigned int nbr, const char *s1)
{
	int		i;
	int		len;
	int		l;
	char	buffer[20];

	i = 0;
	len = 0;
	l = 0;
	len -= ft_hex_nbrcount(nbr);
	if (s1[i] == '-')
			i++;
	while (s1[i] >= '0' && s1[i] <= '9')
		buffer[l++] = s1[i++];
	len += ft_atoi(buffer);
	i = len;
	if (i < 0)
		return (0);
	while (len > 0)
	{
		write(1, " ", 1);
		len--;
	}
	return (i);
}
