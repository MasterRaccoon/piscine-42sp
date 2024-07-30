/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:25:30 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/24 20:09:18 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	phrase1[] = "hElLO, WoRlD!";
	char	phrase2[] = "hello, world!";
	char	phrase3[] = "H3LL0, W0R1D!";
	char	phrase4[] = "HELLO, WORLD!";
	char	empty[] = "";

	printf("%s\n", ft_strlowcase(phrase1));
	printf("%s\n", ft_strlowcase(phrase2));
	printf("%s\n", ft_strlowcase(phrase3));
	printf("%s\n", ft_strlowcase(phrase4));
	printf("%s\n", ft_strlowcase(empty));
}
*/