/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:00:47 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/22 18:42:43 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = (*a / *b);
	*b = (temp % *b);
}
/*
int	main(void)
{
	int		a;
	int		b;
	char	newline;

	a = 18;
	b = 4;
	newline = '\n';
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
	printf("%c", newline);
	return (0);
}
*/