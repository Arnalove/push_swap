/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:11:03 by achansar          #+#    #+#             */
/*   Updated: 2022/12/26 18:09:14 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void    get_index(t_list *head)
{
    int i;
    t_list  *current;
    t_list  *compare;

    current = head;
    while (current)
    {
        i = 0;
        compare = head;
        while (compare)
        {
            if (*current->val > *compare->val)
            {
                current->index += 1;
            }
            compare = compare->next;
        }
        printf("\n\n");
        current = current->next;
    }
}
