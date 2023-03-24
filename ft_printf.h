/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:21:50 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/24 20:08:46 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(int a);
int	ft_putstr(const char *str);
int	ft_putptr(unsigned long long ptr);
int	ft_print_hex(unsigned long long n);
int	ft_count16(unsigned long long ptr);
int	ft_putnbr(int nb, const char *s1);
int	ft_check_type(va_list arg, char type, const char *s1);
int	ft_printf(const char *str, ...);
int	ft_put_unsigned_nbr(unsigned int nbr, const char *s1);
int	ft_print_lowc_nbr_hex(unsigned int nbr);
int	ft_print_uppc_nbr_hex(unsigned int nbr);
int	ft_check_flags(va_list arg, va_list arg2, const char *flags);
int	ft_sort_flags(va_list arg2, const char *s1);
int	ft_put_space_str(char *str, const char *s1);
int	ft_strlen(char *str);
int	ft_atoi(char *str);
int	iterate_until_type(const char *s1);
int	ft_sort_space(va_list arg2, const char *s1);
int	ft_put_space_char(const char *s1);
int	ft_put_space_int(int nbr, const char *s1);
int	ft_nbrcount(long int nbr);
int	ft_unbrcount(unsigned int nbr);
int	ft_hex_nbrcount(long long nbr);
int	ft_put_space_uint(unsigned int nbr, const char *s1);
int	ft_put_space_hex(unsigned int nbr, const char *s1);
int	ft_put_space_ptr(long long ptr, const char *s1);
int	ft_put_zero_int(int nbr, const char *s1);
int	main(void);

#endif