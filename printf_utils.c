/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:28:31 by ecaruso           #+#    #+#             */
/*   Updated: 2023/03/02 17:34:08 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a)
{
	return(write(1, &a, 1));
}

void ft_putstr(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while(str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
	return (i);
}

