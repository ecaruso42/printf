/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:21:50 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/06 18:33:13 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>

int	ft_putchar(char a);
int	ft_putstr(char	*str);
int	ft_putptr(unsigned long long ptr);
int	ft_print_hex(unsigned long long n);
int	ft_count16(unsigned long long ptr);

#endif