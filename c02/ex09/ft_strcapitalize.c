/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagouzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:57:59 by aagouzou          #+#    #+#             */
/*   Updated: 2022/09/06 16:43:27 by aagouzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*to_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_char;

	to_lowcase(str);
	i = 0;
	first_char = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0'
				&& str[i] <= '9'))
		{
			if (first_char == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
			first_char = 0;
		}
		else
			first_char = 1;
		i++;
	}
	return (str);
}
