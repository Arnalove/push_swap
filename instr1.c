/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:00:39 by achansar          #+#    #+#             */
/*   Updated: 2022/12/23 12:02:59 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void    swap(t_list **ptr, t_list *lst)
{
	t_list  *temp;

	if (lst && lst->next->val)
	{
		*ptr = lst->next;
		temp = lst->next->next;
		lst->next->next = lst;
		lst->next = temp;
	}
}

void    double_swap(t_list **list_a, t_list **list_b)
{
	if (*list_a)
		swap(list_a, *list_a);
	if (*list_b)
		swap(list_b, *list_b);
}

void	push_a(t_list **list_a, t_list **list_b)
{
	t_list *head;

	head = *list_b;
	*list_b = head->next;
	if (*list_a)
		head->next = *list_a;
	else
		head->next = NULL;
	*list_a = head;
}

void	push_b(t_list **list_a, t_list **list_b)//                      => remettre pointeur a null si liste se vide
{
	t_list *head;

	head = *list_a;
	*list_a = head->next;
	if (*list_b)
		head->next = *list_b;
	else
		head->next = NULL;
	*list_b = head;
}
