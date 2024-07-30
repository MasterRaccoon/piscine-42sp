/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:24:28 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/26 22:59:22 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[16];
	unsigned int	n = 16;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);

	// verficar se o código está completando o resto com caracteres nulos.
	printf("\n");
	for (unsigned int i = 0; i < n; i++) {
		if (dest[i] == '\0') {
			printf("dest[%u] = '\\0'\n", i);
		} else {
			printf("dest[%u] = '%c'\n", i, dest[i]);
		}
	}
	
	return (0);
}
*/