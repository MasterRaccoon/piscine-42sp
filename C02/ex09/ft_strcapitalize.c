/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:33:19 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/26 23:15:42 by dgerage-         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if (i > 0 && str[i] >= 'a' && str[i] <= 'z'
			&& !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
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
	char	phrase1[] = "Hello, World!";
	char	phrase2[] = "hELLO, wORLD";
	char	phrase3[] = "oi, tUdo bEm? 42palaVras quarEnta-e-duas;
	 cinquEnta+e+um";
	char	phrase4[] = "oi, tudo bem? 42palavras quarenta-e-duas;
	 cinquenta+e+um";
	char	empty[] = "";

	printf("%s\n", ft_strcapitalize(phrase1));
	printf("%s\n", ft_strcapitalize(phrase2));
	printf("%s\n", ft_strcapitalize(phrase3));
	printf("%s\n", ft_strcapitalize(phrase4));
	printf("%s\n", ft_strcapitalize(empty));
}
*/