/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:11:03 by achansar          #+#    #+#             */
/*   Updated: 2022/12/26 15:27:30 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

/*
23 & 23 = va comparer les bits en position. seulement si les 2 valent 1,
            alors le resultat vaudra 1. Dans tous les autres cas, 0.
23 >> 2 = Va decaler les bits de 23 de 2 crans sur la droite. 

*/

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
                current->index += 1;
            compare = compare->next;
            // printf("Current = %d, Compare = %d\n", *current->val, *compare->val);
            // printf("index = %d\n", current->index);
        }
        printf("\n\n");
        current = current->next;
    }
}
