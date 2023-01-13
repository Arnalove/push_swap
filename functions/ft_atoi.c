/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:41:32 by achansar          #+#    #+#             */
/*   Updated: 2023/01/13 14:41:35 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	convert;
	size_t	convert_previous;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] == '0')
		i++;
	convert = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		convert_previous = convert;
		convert = convert * 10 + str[i++] - 48;
		if (convert < convert_previous)
			return (2147483648);
	}
	return (convert * sign);
}
