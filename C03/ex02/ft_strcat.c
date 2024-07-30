/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:52:46 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/30 19:42:31 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/*
int main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "World!";

	// Antes da concatenação
	printf("Antes: %s\n", dest);

	ft_strcat(dest, src);

	// Depois da concatenação
	printf("Depois: %s\n", dest);

	return 0;
}
*/