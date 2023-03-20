/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:29:12 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/20 21:45:04 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		n = 9;
	char	str[5] = "Ciao";

	printf("|%-3x|\n", 15);
	ft_printf("|%-3x|\n", 15);
	ft_printf("|%-s|\n", str);
	ft_printf("|%12i|\n", n);
	//printf("|%-6s|\n", str);
	//ft_printf("|%-1s| abcdef |%1234i|\n", str, n);
	printf("|%-s|", str);
	return (0);
}

//il programma capisce quando incontra una flag ma manca da definirne i comportamenti