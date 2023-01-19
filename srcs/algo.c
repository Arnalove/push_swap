/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:28:02 by achansar          #+#    #+#             */
/*   Updated: 2023/01/19 11:06:37 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	ft_radix(t_stack *stack, int size)
{
	int	i;
	int	loop;

	i = 1;
	while (ft_checker(stack->list_a, stack->list_b) != 0)
	{
		loop = size;
		while (loop)
		{
			if ((stack->list_a->index & i) == 0)
				push_b(&stack->list_a, &stack->list_b);
			else
				rotate(&stack->list_a, stack->list_a);
			loop--;
		}
		while (stack->list_b)
			push_a(&stack->list_a, &stack->list_b);
		i *= 2;
	}
	return (0);
}

static int	ft_verylittle_algo(t_list **list, t_list *head)
{
	if (ft_checker(*list, 0) != 0)
	{
		head = *list;
		if ((*head->val > *head->next->val
				&& *head->val < *head->next->next->val)
			|| (*head->val > *head->next->val
				&& *head->next->val > *head->next->next->val)
			|| (*head->val < *head->next->val
				&& *head->val < *head->next->next->val))
			swap(list, head);
		head = *list;
		while (ft_checker(*list, 0) != 0)
		{
			if (*head->val > *head->next->next->val
				&& *head->next->val < *head->next->next->val)
				rotate(list, *list);
			else
				rotate_rev(list, *list);
		}
	}
	return (0);
}

static int	ft_little_algo(t_stack *stack, t_list *head, int size)
{
	while (size--)
	{
		head = stack->list_a;
		if (head->index == 0 || head->index == 1)
			push_b(&stack->list_a, &stack->list_b);
		else if (ft_lstsize(stack->list_b) < 2)
			rotate(&stack->list_a, stack->list_a);
	}
	ft_verylittle_algo(&stack->list_a, stack->list_a);
	while (stack->list_b)
		push_a(&stack->list_a, &stack->list_b);
	if (*stack->list_a->val > *stack->list_a->next->val)
		swap(&stack->list_a, stack->list_a);
	return (0);
}

int	ft_define_size(t_stack *stack, int size)
{
	if (ft_checker(stack->list_a, 0) != 0)
	{
		if (size == 2)
			rotate(&stack->list_a, stack->list_a);
		else if (size == 3)
			ft_verylittle_algo(&stack->list_a, stack->list_a);
		else if (size == 5)
			ft_little_algo(stack, stack->list_a, size);
		else
			ft_radix(stack, size);
	}
	return (0);
}
