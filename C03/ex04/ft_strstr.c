/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:17:26 by davi              #+#    #+#             */
/*   Updated: 2024/07/30 03:30:42 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	to_find_len;
	unsigned int	i;

	to_find_len = 0;
	while (to_find[to_find_len] != '\0')
		to_find_len++;
	if (to_find_len == 0)
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i] != '\0')
			i++;
		if (i == to_find_len)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Hello, world!";
	char	to_find[] = "world";
	char	*result;

	result = ft_strstr(str, to_find);
	if (result)
	{
		printf("Substring found: %s\n", result);
	}
	else
	{
		printf("Substring not found.\n");
	}
	return (0);
}
*/