/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:07:53 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/24 20:07:11 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	abc[4] = {'a', 'b', 'c', '\0'};
	char	ABC[4] = {'A', 'B', 'C', '\0'};
	char	num[7] = {'0', '1', '2', '3', '4', '5', '\0'};
	char	alphanum[7] = {'A', '1', 'b', '2', 'c', '3', '\0'};
	char	printable[34] = {
		' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+',
		',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[',
		'\\', ']', '^', '_', '`', '{', '|', '}', '~', '\0'};
	char	empty[5] = {};

	printf("%d\n", ft_str_is_uppercase(abc));
	printf("%d\n", ft_str_is_uppercase(ABC));
	printf("%d\n", ft_str_is_uppercase(num));
	printf("%d\n", ft_str_is_uppercase(alphanum));
	printf("%d\n", ft_str_is_uppercase(printable));
	printf("%d\n", ft_str_is_uppercase(empty));

	return (0);
}
*/