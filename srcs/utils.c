/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:36:31 by achansar          #+#    #+#             */
/*   Updated: 2023/01/13 16:20:27 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_stack_init(t_stack *stack)
{
	stack->list_a = NULL;
	stack->list_b = NULL;
}

int	ft_checker(t_list *lst_a, t_list *lst_b)
{
	t_list	*current;

	current = NULL;
	if (!lst_b)
	{
		current = lst_a;
		while (current)
		{
			if (current->next)
			{
				if (*current->val > *current->next->val)
					return (1);
			}
			current = current->next;
		}
	}
	else
		return (1);
	return (0);
}

t_list	*list_init(int *tab, int i, int size)
{
	t_list	*list;
	t_list	*ele;

	list = NULL;
	if (size != 0)
	{
		ele = ft_lstnew(&tab[i]);
		list = list_init(tab, ++i, --size);
	}
	else
		return (list);
	ft_lstadd_front(&list, ele);
	if (!list)
		return (ele);
	else
		return (list);
}

void	*ft_error_msg(void)
{
	write(2, "Error\n", 6);
	return (NULL);
}
