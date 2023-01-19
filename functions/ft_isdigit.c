/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:41:48 by achansar          #+#    #+#             */
/*   Updated: 2023/01/19 11:26:15 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if ((str[i] < '0' || str[i] > '9') && (str[i] < 9 || str[i] > 13)
				&& str[i] != ' ' && str[i] != '-' && str[i] != '+')
			{
				return (1);
			}
			if (str[i] == '-' || str[i] == '+')
			{
				if (!str[i + 1])
					return (1);
				else if ((str[i - 1] && (str[i - 1] >= '0' || str[i - 1] <= '9'))
						&& (str[i + 1] && (str[i + 1] >= '0' || str[i + 1] <= '9')))
					return (1);
			}
			i++;
		}
	}
	return (0);
}
