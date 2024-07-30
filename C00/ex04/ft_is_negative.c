/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:16:23 by davi              #+#    #+#             */
/*   Updated: 2024/07/14 12:15:13 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n >= 0)
	{
		write(1, &positive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}
/*
int	main(void)
{
	char	newline;

	newline = '\n';
	ft_is_negative(-3);
	write(1, &newline, 1);
	ft_is_negative(-2);
	write(1, &newline, 1);
	ft_is_negative(-1);
	write(1, &newline, 1);
	ft_is_negative(0);
	write(1, &newline, 1);
	ft_is_negative(1);
	write(1, &newline, 1);
	ft_is_negative(2);
	write(1, &newline, 1);
	ft_is_negative(3);
	write(1, &newline, 1);
	return (0);
}
*/