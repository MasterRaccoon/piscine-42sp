/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 03:20:49 by davi              #+#    #+#             */
/*   Updated: 2024/07/31 14:32:06 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13) || *str == '+'
		|| *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
/*
int main(void) {
	char test1[] = " - + + 1234";   // Teste com espaços iniciais
	char test2[] = "--+--+1234";    // Teste com múltiplos sinais
	char test3[] = "+42abc";        // Teste com caracteres após o número
	char test4[] = "-00123";        // Teste com zeros à esquerda
	char test5[] = "  +0";          // Teste com zero
	char test6[] = "  -42";         // Teste com número negativo simples

	printf("%d\n", ft_atoi(test1));
	printf("%d\n", ft_atoi(test2));
	printf("%d\n", ft_atoi(test3));
	printf("%d\n", ft_atoi(test4));
	printf("%d\n", ft_atoi(test5));
	printf("%d\n", ft_atoi(test6));

	return (0);
}
*/