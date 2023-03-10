/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:21:50 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/10 17:17:48 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int a);
int	ft_putstr(char	*str);
int	ft_putptr(unsigned long long ptr);
int	ft_print_hex(unsigned long long n);
int	ft_count16(unsigned long long ptr);
int	ft_putnbr(int nb);
int	ft_check_type(va_list arg, char type);
int	ft_printf(const char *str, ...);
int ft_put_unsigned_nbr(unsigned int nbr);
int	ft_print_lowc_nbr_hex(unsigned int nbr);
int	ft_print_uppc_nbr_hex(unsigned int nbr);

#endif