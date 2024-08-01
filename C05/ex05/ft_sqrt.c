/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:11:58 by davi              #+#    #+#             */
/*   Updated: 2024/07/31 21:54:26 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int ft_sqrt(int nb)
{
	int root;
	int sqrt;

	root = 1;
	sqrt = 0;
	while (root <= nb / 2)
	{
		sqrt = root * root;
		if (sqrt == nb)
		{
			return (root);
		}
		root = root + 1;
	}
	return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_sqrt(25));    // Esperado: 5
	printf("%d\n", ft_sqrt(49));    // Esperado: 7
	printf("%d\n", ft_sqrt(16));    // Esperado: 4
	printf("%d\n", ft_sqrt(144));   // Esperado: 12
	printf("%d\n", ft_sqrt(1764));  // Esperado: 42
	printf("%d\n", ft_sqrt(20));    // Esperado: 0 (não é um quadrado perfeito)
	return 0;
}
*/