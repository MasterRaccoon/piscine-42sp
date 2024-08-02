/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerage- <dgerage-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:52:48 by dgerage-          #+#    #+#             */
/*   Updated: 2024/08/01 21:00:03 by dgerage-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_arg(char *arg);
void	ft_insertion_sort(int num_args, char **args);
int		ft_strlen(char *arg);
int		ft_strcmp(char *str1, char *str2);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	ft_insertion_sort(argc, argv);
	while (i < argc)
	{
		ft_print_arg(argv[i++]);
	}
	return (0);
}

void	ft_print_arg(char *arg)
{
	write(1, arg, ft_strlen(arg));
	write(1, "\n", 1);
}

int	ft_strlen(char *arg)
{
	int	i;

	i = 0;
	while (*arg)
	{
		i++;
		arg++;
	}
	return (i);
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_insertion_sort(int num_args, char **args)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < num_args)
	{
		j = i;
		while (j > 1)
		{
			if (ft_strcmp(args[j], args[j - 1]) < 0)
			{
				temp = args[j - 1];
				args[j - 1] = args[j];
				args[j] = temp;
			}
			else
				break ;
			j--;
		}
		i++;
	}
}
