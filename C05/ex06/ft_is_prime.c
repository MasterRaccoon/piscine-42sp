/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:55:12 by davi              #+#    #+#             */
/*   Updated: 2024/07/31 23:00:42 by davi             ###   ########.fr       */
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