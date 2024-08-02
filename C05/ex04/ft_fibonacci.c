/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:53:57 by dgerage-          #+#    #+#             */
/*   Updated: 2024/08/01 15:46:35 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
/*
int	main(void)
{
	printf("%d\n",ft_fibonacci(-1));
	printf("%d\n",ft_fibonacci(0));
	printf("%d\n",ft_fibonacci(1));
	printf("%d\n",ft_fibonacci(2));
	printf("%d\n",ft_fibonacci(3));
	printf("%d\n",ft_fibonacci(4));
	printf("%d\n",ft_fibonacci(11));
	return (0);
}
*/