/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:28:02 by achansar          #+#    #+#             */
/*   Updated: 2022/12/26 18:39:33 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int ft_radix(t_stack *stack, int size)
{
    int i;
    int loop;

    i = 1;
    while(ft_checker(stack->list_a, stack->list_b) != 0)
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

// int ft_define_size(t_stack *stack, int size)
// {
//     if (size == 3 || size == 2)
//         ft_verylittle_algo(stack, size);
//     else if (size == 5)
//         ft_little_algo(stack, size);
//     else
//         ft_radix(stack, size);
// }