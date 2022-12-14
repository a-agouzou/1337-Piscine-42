/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagouzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:48:32 by aagouzou          #+#    #+#             */
/*   Updated: 2022/09/14 18:27:54 by aagouzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (nb > 0)
	{
		nb = nb - i;
		i = i + 2;
		j++;
	}
	if (nb == 0)
		return (j);
	else
		return (0);
}
