/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:29:12 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/13 20:12:47 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		n = 9;
	char	str[20] = "Ciao";
	ft_printf("|%1d|\n", n);
	return (0);
}

//il programma capisce quando incontra una flag ma mancano da definirne i comportamenti