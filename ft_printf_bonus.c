/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:24:15 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/21 20:24:29 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_sort_space(va_list arg2, const char *s1)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	i += iterate_until_type(&s1[i]);
	if (s1[i] == 'c')
		len += ft_put_space_char(&s1[0]);
	if (s1[i] == 'i' || s1[i] == 'd')
		len += ft_put_space_int(va_arg(arg2, int), &s1[0]);
	if (s1[i] == 'u')
		len += ft_put_space_uint(va_arg(arg2,unsigned int), &s1[0]);
	if (s1[i] == 's')
		len += ft_put_space_str(va_arg(arg2, char *), &s1[0]);
	if (s1[i] == 'p')
		len += ft_put_space_ptr(va_arg(arg2, long long), &s1[0]);
	if (s1[i] == 'x' || s1[i] == 'X')
		len += ft_put_space_hex(va_arg(arg2, long long), &s1[0]);
	return (len);
}

int	ft_put_space_char(const char *s1)
{
	int		i;
	int		len;
	int		l;
	char	buffer[30];

	i = 0;
	len = -1;
	l = 0;
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

int	ft_put_space_str(char *str, const char *s1)
{
	int		i;
	int		len;
	int		l;
	char	buffer[30];

	i = 0;
	len = 0;
	l = 0;
	len -= ft_strlen(str);
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

int	ft_put_space_int(int nbr, const char *s1)
{
	int		i;
	int		len;
	int		l;
	char	buffer[20];

	i = 0;
	len = 0;
	l = 0;
	len -= ft_nbrcount(nbr);
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

int	ft_put_space_ptr(long long ptr, const char *s1)
{
	int		i;
	int		len;
	int		l;
	char	buffer[20];

	i = 0;
	l = 0;
	len = 0;
	len -= ft_hex_nbrcount(ptr);
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

int	ft_put_space_uint(unsigned int nbr, const char *s1)
{
	int		i;
	int		len;
	int		l;
	char	buffer[20];

	i = 0;
	len = 0;
	l = 0;
	len -= ft_unbrcount(nbr);
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

int	ft_put_space_hex(long long nbr, const char *s1)
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
		ft_putchar(' ');
		len--;
	}
	return (i);
}

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

int	ft_hex_nbrcount(unsigned long long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
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
	return(i);
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
