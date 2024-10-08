/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:21:10 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/30 19:42:32 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	i;

	ptr = dest;
	i = 0;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && i < nb)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "World!";
	unsigned int	nb;

	nb = 3;
	// Antes da concatenação
	printf("Antes: %s\n", dest);

	ft_strncat(dest, src, nb);

	// Depois da concatenação
	printf("Depois: %s\n", dest);

	return 0;
}
*/