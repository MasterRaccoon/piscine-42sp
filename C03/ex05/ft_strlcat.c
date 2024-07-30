/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 03:34:49 by davi              #+#    #+#             */
/*   Updated: 2024/07/30 03:44:55 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (size <= dest_len)
		return size + src_len;

	i = 0;
	while (src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return dest_len + src_len;
}

int	main(void)
{
	char	dest[50] = "Hello, ";
	char	src[] = "world!";
	unsigned int	size = sizeof(dest);

	unsigned int result = ft_strlcat(dest, src, size);

	printf("Resulting string: %s\n", dest);
	printf("Total length of string that was tried: %u\n", result);

	return 0;
}