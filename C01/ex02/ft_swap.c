/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:25:19 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/22 18:40:55 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int	main(void)
{
	int		a;
	int		b;
	char	newline;

	a = 2;
	b = 4;
	newline = '\n';
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	printf("%c", newline);
	return (0);
}
*/