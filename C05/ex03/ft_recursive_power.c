/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:44:06 by davi              #+#    #+#             */
/*   Updated: 2024/07/31 19:53:54 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = -1;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 10;
	power = 0;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 2;
	power = 4;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 3;
	power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 5;
	power = 4;
	printf("%d\n", ft_recursive_power(nb, power));
}
*/