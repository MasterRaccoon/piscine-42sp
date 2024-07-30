/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:59:50 by davi              #+#    #+#             */
/*   Updated: 2024/07/29 22:56:12 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (!(c == '7' && d == '8' && u == '9'))
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}

int	main(void)
{
	char	newline;

	newline = '\n';
	ft_print_comb();
	write(1, &newline, 1);
	return (0);
}
