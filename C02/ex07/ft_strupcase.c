/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:01:32 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/24 20:08:29 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	phrase1[] = "HeLlO, wOrLd!";
	char	phrase2[] = "hello, world!";
	char	phrase3[] = "h3ll0, w0r1d!";
	char	phrase4[] = "HELLO, WORLD!";
	char	empty[] = "";

	printf("%s\n", ft_strupcase(phrase1));
	printf("%s\n", ft_strupcase(phrase2));
	printf("%s\n", ft_strupcase(phrase3));
	printf("%s\n", ft_strupcase(phrase4));
	printf("%s\n", ft_strupcase(empty));
}
*/