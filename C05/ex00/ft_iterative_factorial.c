/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:43:47 by dgerage-          #+#    #+#             */
/*   Updated: 2024/08/01 15:30:27 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	int	number;

	number = -1;
	printf("%d", ft_iterative_factorial(number));
	printf("\n");
	number = 0;
	printf("%d", ft_iterative_factorial(number));
	printf("\n");
	number = 5;
	printf("%d", ft_iterative_factorial(number));
	printf("\n");
	number = 6;
	printf("%d", ft_iterative_factorial(number));
	printf("\n");
	number = 7;
	printf("%d", ft_iterative_factorial(number));
	printf("\n");
}
*/