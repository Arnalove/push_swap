/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:44:16 by achansar          #+#    #+#             */
/*   Updated: 2023/01/13 14:44:18 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		while (src[i] != '\0' && i < dstsize -1)
		{
			if (dstsize > 0)
				dst[i] = src[i];
			i++;
			if (src[i] != '\0')
				len++;
		}
		len++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (len);
}
