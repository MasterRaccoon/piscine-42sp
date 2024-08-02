/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:55:12 by dgerage-          #+#    #+#             */
/*   Updated: 2024/08/01 15:47:02 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(-1));  // Esperado: 0
	printf("%d\n", ft_is_prime(0));   // Esperado: 0
	printf("%d\n", ft_is_prime(1));   // Esperado: 0
	printf("%d\n", ft_is_prime(2));   // Esperado: 1
	printf("%d\n", ft_is_prime(3));   // Esperado: 1
	printf("%d\n", ft_is_prime(4));   // Esperado: 0
	printf("%d\n", ft_is_prime(29));  // Esperado: 1
	printf("%d\n", ft_is_prime(100)); // Esperado: 0
	return (0);
}
*/