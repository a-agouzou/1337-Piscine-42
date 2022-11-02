/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagouzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:58:11 by aagouzou          #+#    #+#             */
/*   Updated: 2022/08/29 13:01:39 by aagouzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	n_ft_putchar(void)
{
	write(1, "N", 1);
}

void	p_ft_putchar(void)
{
	write(1, "P", 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		p_ft_putchar();
	}
	else
	{
		n_ft_putchar();
	}
}
