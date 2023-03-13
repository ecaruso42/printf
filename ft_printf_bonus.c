/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:24:15 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/13 19:56:07 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_space(const char *flags)
{
	int i;

	i = 0;
	while (flags[i] != '\0')
	{
		ft_putchar('c');
		ft_putstr(flags);
		i++;
	}
	return (i);
}