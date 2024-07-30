/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:31:43 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/24 20:06:04 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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

	printf("%d\n", ft_str_is_numeric(abc));
	printf("%d\n", ft_str_is_numeric(ABC));
	printf("%d\n", ft_str_is_numeric(num));
	printf("%d\n", ft_str_is_numeric(alphanum));
	printf("%d\n", ft_str_is_numeric(printable));
	printf("%d\n", ft_str_is_numeric(empty));

	return (0);
}
*/