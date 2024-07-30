/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:52:11 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/22 18:42:01 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;
	char	newline;

	newline = '\n';
	a = 18;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
	printf("%c", newline);
	return (0);
}
*/