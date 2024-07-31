/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 20:14:11 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/30 20:34:20 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}

void	ft_putstr(char *str)
{
	int	str_size;

	str_size = ft_strlen(str);
	write(1, str, str_size);
}
/*
int	main(void)
{
	char	str[] = "Hello, World!";

	ft_putstr(str);
}
*/