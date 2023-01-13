/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:33:56 by achansar          #+#    #+#             */
/*   Updated: 2023/01/13 16:18:34 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rotate(t_list **ptr, t_list *lst)
{
	if (*ptr && lst)
	{
		*ptr = lst->next;
		lst->next = NULL;
		ft_lstadd_back(ptr, lst);
	}
	ft_printf("ra\n");
}

void	rotate_rev(t_list **ptr, t_list *lst)
{
	t_list	*temp;

	temp = ft_lstlast(lst, 0);
	lst = ft_lstlast(lst, 1);
	lst->next = NULL;
	ft_lstadd_front(ptr, temp);
	ft_printf("rra\n");
}
