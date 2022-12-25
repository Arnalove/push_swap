/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:36:31 by achansar          #+#    #+#             */
/*   Updated: 2022/12/25 20:18:26 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_stack_init(t_pushswap *stack)
{
	stack->list_a = NULL;
	stack->list_b = NULL;
	stack->ptr_la = NULL;
	stack->ptr_lb = NULL;
}

t_list *list_init(int *tab, int i)
{
	t_list  *list;
	t_list  *ele;

	list = NULL;
	if(tab[i])
	{
		ele = ft_lstnew(&tab[i]);
		list = list_init(tab, ++i);
	}
	else
		return (list);
	ft_lstadd_front(&list, ele);
	if (!list)
		return (ele);
	else
		return (list);
}
