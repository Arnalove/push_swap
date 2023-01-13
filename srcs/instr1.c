/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:00:39 by achansar          #+#    #+#             */
/*   Updated: 2023/01/13 17:18:19 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	swap(t_list **ptr, t_list *lst)
{
	t_list	*temp;

	if (lst && lst->next->val)
	{
		*ptr = lst->next;
		temp = lst->next->next;
		lst->next->next = lst;
		lst->next = temp;
	}
	ft_printf("sa\n");
}

void	push_a(t_list **list_a, t_list **list_b)
{
	t_list	*head;

	if (*list_b)
	{
		head = *list_b;
		*list_b = head->next;
		if (*list_a)
			head->next = *list_a;
		else
			head->next = NULL;
		*list_a = head;
	}
	ft_printf("pa\n");
}

void	push_b(t_list **list_a, t_list **list_b)
{
	t_list	*head;

	if (*list_a)
	{
		head = *list_a;
		*list_a = head->next;
		if (*list_b)
			head->next = *list_b;
		else
			head->next = NULL;
		*list_b = head;
	}
	ft_printf("pb\n");
}
