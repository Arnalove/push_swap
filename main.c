/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:58:24 by achansar          #+#    #+#             */
/*   Updated: 2022/12/21 16:55:31 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int *convert(char *ele, t_list *lst)
{
    int num;
    int *rtr;

    num = ft_atoi(ele);
    rtr = &num;
    return (rtr);
}

t_list *list_init(char **tab)
{
    t_list *list;
    int i;
    t_list ele;

    i = 1;
    list = NULL;
    while (tab[i])
    {
        convert(tab[i]);
        // printf("%d\n", *ele.val);
        ft_lstnew(&ele);
        ft_lstadd_back(&list, &ele);
        i++;
    }
    return (list);
}

void    ft_printlist(t_list *head)
{
    t_list *current;

    current = head;
    while (!current)
    {
        printf("value = %d\n", *current->val);
        current = current->next;
    }
}

int main(int argc, char *argv[])
{
    t_list *list_a;

    (void)argc;
    list_a = list_init(argv);
    //ft_printlist(list_a);
    /*
    recuperer input
    check si formes string => si oui placer dans tableau
    checker si autre nombres
    sinon envoyer tab a init() => creer premiere list linked
    pour cela malloc chaque elem
    */
    return (0);
}