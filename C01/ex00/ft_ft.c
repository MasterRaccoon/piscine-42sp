/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:41:17 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/22 18:47:01 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int		parameter;
	char	output[3];

	parameter = 10;
	ft_ft(&parameter);
	output[0] = (parameter / 10) + '0';
	output[1] = (parameter % 10) + '0';
	output[2] = ('\0');
	write(1, output, 2);
}
*/