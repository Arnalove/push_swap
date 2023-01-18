/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:56:25 by achansar          #+#    #+#             */
/*   Updated: 2023/01/18 17:00:49 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ele;

	ele = malloc(sizeof(t_list));
	if (!ele)
		return (NULL);
	ele->val = content;
	ele->index = 0;
	ele->bin = NULL;
	ele->next = NULL;
	return (ele);
}
