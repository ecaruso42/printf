/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:29:12 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/21 19:25:56 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	//printf("|%-3x|\n", 15);
	//ft_printf("|%-3x|\n", 15);
	// ft_printf("|%-2p|\n", 1);
	printf("|%-13p| |%-14p|\n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
	ft_printf("|%-13p| |%-14p|\n", ULONG_MAX, -ULONG_MAX);
	return (0);
}

//il programma capisce quando incontra una flag ma manca da definirne i comportamenti