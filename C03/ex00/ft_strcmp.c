/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:26:54 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/28 18:53:01 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}
/*
int main(void)
{
	char *s1 = "abcd";
	char *s2 = "abcd";
	int result;

	result = ft_strcmp(s1, s2);

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