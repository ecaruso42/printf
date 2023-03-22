/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:29:12 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/22 16:01:55 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	printf("|%-12x|\n", (unsigned int)LONG_MIN);
	ft_printf("|%-12x|\n", LONG_MIN);
	printf("|%-15x|\n", (unsigned int)9223372036854775807LL);
	ft_printf("|%-15x|\n", 9223372036854775807LL);
	return (0);
}

//il programma capisce quando incontra una flag ma manca da definirne i comportamenti