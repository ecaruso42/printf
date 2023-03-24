/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putzero_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:10:16 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/24 17:45:33 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_zero_int(int nbr, const char *s1)
{
	int		i;
	int		len;
	int		l;
	char	buffer[20];

	i = 0;
	len = 0;
	l = 0;
	len -= ft_nbrcount(nbr);
	if (s1[i] == '0')
			i++;
	while (s1[i] >= '0' && s1[i] <= '9')
		buffer[l++] = s1[i++];
	len += ft_atoi(buffer);
	i = len;
	if (i < 0)
		return (0);
	while (len > 0)
	{
		ft_putchar('0');
		len--;
	}
	return (i);
}
