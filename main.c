/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:29:12 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/24 16:53:29 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	printf("|%010d|\n", INT_MIN);
	ft_printf("|%010d|\n", INT_MIN);
	printf("|%09d|\n", INT_MAX);
	ft_printf("|%09d|\n", INT_MAX);
	return (0);
}

//il programma capisce quando incontra una flag ma manca da definirne i comportamenti