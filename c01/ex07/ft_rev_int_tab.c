/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagouzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:56:57 by aagouzou          #+#    #+#             */
/*   Updated: 2022/08/30 11:44:04 by aagouzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tem;

	i = 0;
	while (i < size / 2)
	{
		tem = tab[i];
		tab[i] = tab [size - i - 1];
		tab[size - i - 1] = tem;
		i++;
	}
}
