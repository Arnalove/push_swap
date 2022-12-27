/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:33:56 by achansar          #+#    #+#             */
/*   Updated: 2022/12/27 19:29:32 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void    rotate(t_list **ptr, t_list *lst)
{
	if (*ptr && lst)
	{
		*ptr = lst->next;
		lst->next = NULL;
		ft_lstadd_back(ptr, lst);
	}
	ft_printf("ra\n");
}

void    double_rotate(t_list **list_a, t_list **list_b)
{
	if (*list_a)
		rotate(list_a, *list_a);
	if (*list_b)
		rotate(list_b, *list_b);
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

void	double_rotate_rev(t_list **list_a, t_list **list_b)
{
	if (*list_a)
		rotate_rev(list_a, *list_a);
	if (*list_b)
		rotate_rev(list_b, *list_b);
}
