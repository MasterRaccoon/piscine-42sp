/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:44:01 by dgerage-          #+#    #+#             */
/*   Updated: 2024/08/01 15:46:10 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = -1;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 10;
	power = 0;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 2;
	power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 3;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 5;
	power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
}
*/