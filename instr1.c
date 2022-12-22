/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:00:39 by achansar          #+#    #+#             */
/*   Updated: 2022/12/22 18:14:47 by achansar         ###   ########.fr       */
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

void    rotate(t_list **ptr, t_list *lst)
{
	if (*ptr && lst)
	{
		*ptr = lst->next;
		lst->next = NULL;
		ft_lstadd_back(ptr, lst);
	}
}

void    double_rotate(t_list **list_a, t_list **list_b)
{
	if (*list_a)
		rotate(list_a, *list_a);
	if (*list_b)
		rotate(list_b, *list_b);
}

// void	rotate_rev(t_list **ptr, t_list *lst)
// {
// 	int		i;
// 	int		s;
//     t_list	*temp;

// 	(void)ptr;
// 	temp = ft_lstlast(lst);
// 	temp->next = lst;
// 	i = 0;
// 	s = ft_lstsize(lst);
// 	while (lst && i < s - 2)
// 	{
// 		lst = lst->next;
// 		i++;
// 	}
// 	lst->next = NULL;
// 	printf("lst = %d\n", *lst->val);
// 	printf("temp = %d\n", *temp->val);
// }
