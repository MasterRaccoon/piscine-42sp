/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:24:14 by dgerage-          #+#    #+#             */
/*   Updated: 2024/07/26 23:08:03 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(char c)
{
	char	*hex;
	int		val;

	val = (unsigned char)c;
	hex = "0123456789abcdef";
	ft_putchar(hex[val / 16]);
	ft_putchar(hex[val % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			ft_putchar('\\');
			ft_put_hex(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
/*
int	main(void)
{
	char src[0xFF + 10];
	char test_str[] = "Oi\nvoce esta bem?";
	char test_str1[] = "Hello\tWorld!\n";
	char test_str2[] = "Line1\n\n\nLine2\r";
	char test_str3[] = "Hello\x01World\x7f!";
	char test_str4[] = "NormalText";
	int	i;

	i = 1;
	while (i <= 0xFF)
	{
		src[i - 1] = i;
		i++;
	}
	src[i - 1] = '\0';

	ft_putstr_non_printable(test_str);
	ft_putchar('\n');
	ft_putstr_non_printable(test_str1);
    ft_putchar('\n');
    ft_putstr_non_printable(test_str2);
    ft_putchar('\n');
    ft_putstr_non_printable(test_str3);
    ft_putchar('\n');
    ft_putstr_non_printable(test_str4);
    ft_putchar('\n');
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable(src);
	write(1, "\n", 1);
	return (0);
}
*/