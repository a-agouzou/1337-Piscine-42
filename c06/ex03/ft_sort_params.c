/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagouzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:42:13 by aagouzou          #+#    #+#             */
/*   Updated: 2022/09/13 19:33:00 by aagouzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	tem;

	j = 1;
	while (j < ac - 1)
	{
		i = j + 1;
		while (i < ac)
		{
			if (ft_strcmp(av[j], av[i]) > 0)
			{
				tem = *av[j];
				*av[j] = *av[i];
				*av[i] = tem;
			}
			i++;
		}
		j++;
	}
	ft_print(ac, av);
}
