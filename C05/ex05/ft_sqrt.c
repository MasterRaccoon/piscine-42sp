/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:11:58 by dgerage-          #+#    #+#             */
/*   Updated: 2024/08/01 21:45:10 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
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