/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:53:57 by davi              #+#    #+#             */
/*   Updated: 2024/07/31 21:10:36 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
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