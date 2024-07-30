/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 23:53:45 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/30 19:42:34 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{	
		return (0);
	}
	else
	{
		while (i < n && s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
				i++;
		}
		if (i < n && ((s1[i] == '\0' && s2[i] != '\0')
				|| (s2[i] == '\0' && s1[i] != '\0')))
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char *s1 = "Hello3 World!";
	char *s2 = "Hello2 World!";
	unsigned int	n = 5;
	int result;

	result = ft_strncmp(s1, s2, n);

	// Exibe o resultado da comparação
	if (result < 0)
		printf("\"%s\" é menor que \"%s\"\n", s1, s2);
	else if (result == 0)
		printf("\"%s\" é igual a \"%s\"\n", s1, s2);
	else
		printf("\"%s\" é maior que \"%s\"\n", s1, s2);

	return (0);
}
*/