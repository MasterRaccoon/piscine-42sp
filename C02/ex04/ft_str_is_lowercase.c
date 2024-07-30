/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:31:01 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/24 20:06:34 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
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

	printf("%d\n", ft_str_is_lowercase(abc));
	printf("%d\n", ft_str_is_lowercase(ABC));
	printf("%d\n", ft_str_is_lowercase(num));
	printf("%d\n", ft_str_is_lowercase(alphanum));
	printf("%d\n", ft_str_is_lowercase(printable));
	printf("%d\n", ft_str_is_lowercase(empty));

	return (0);
}
*/