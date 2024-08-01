/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 23:02:36 by davi              #+#    #+#             */
/*   Updated: 2024/07/31 23:24:43 by davi             ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(-1));   // Esperado: 2
	printf("%d\n", ft_find_next_prime(0));    // Esperado: 2
	printf("%d\n", ft_find_next_prime(1));    // Esperado: 2
	printf("%d\n", ft_find_next_prime(2));    // Esperado: 2
	printf("%d\n", ft_find_next_prime(3));    // Esperado: 3
	printf("%d\n", ft_find_next_prime(4));    // Esperado: 5
	printf("%d\n", ft_find_next_prime(20));   // Esperado: 23
	printf("%d\n", ft_find_next_prime(29));   // Esperado: 29
	printf("%d\n", ft_find_next_prime(30));   // Esperado: 31
	return (0);
}
*/