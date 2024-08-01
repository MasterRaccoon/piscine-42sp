/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:43:53 by davi              #+#    #+#             */
/*   Updated: 2024/07/31 22:46:51 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
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
	result = (nb * ft_recursive_factorial(nb - 1));
	return (result);
}
/*
int	main(void)
{
	int	number;

	number = -1;
	printf("%d", ft_recursive_factorial(number));
	printf("\n");
	number = 0;
	printf("%d", ft_recursive_factorial(number));
	printf("\n");
	number = 5;
	printf("%d", ft_recursive_factorial(number));
	printf("\n");
	number = 6;
	printf("%d", ft_recursive_factorial(number));
	printf("\n");
	number = 7;
	printf("%d", ft_recursive_factorial(number));
	printf("\n");
}
*/