/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:28:02 by achansar          #+#    #+#             */
/*   Updated: 2022/12/26 17:30:42 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int ft_radix(t_stack *stack, int size)
{
    int i;
    int loop;

    i = 1;
    
    while(i <= 4)
    {
        loop = size;
        while (loop)
        {
            if (ft_checker(stack->list_a, stack->list_b) == 0)
            {
                ft_printf("SORTED IN XX OPERATIONS.\n");
		        return (0);
            }
            if ((stack->list_a->index & i) == 0)
                push_b(&stack->list_a, &stack->list_b);
            else
                rotate(&stack->list_a, stack->list_a);
            loop--;
        }
        while (stack->list_b)
        {
            push_a(&stack->list_a, &stack->list_b);
        }
        i *= 2;
    }
    return (0);
}
