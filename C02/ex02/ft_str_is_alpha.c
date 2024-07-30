/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:03:55 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/24 20:05:25 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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

	printf("%d\n", ft_str_is_alpha(abc));
	printf("%d\n", ft_str_is_alpha(ABC));
	printf("%d\n", ft_str_is_alpha(num));
	printf("%d\n", ft_str_is_alpha(alphanum));
	printf("%d\n", ft_str_is_alpha(printable));
	printf("%d\n", ft_str_is_alpha(empty));

	return (0);
}
*/