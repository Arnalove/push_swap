/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:58:24 by achansar          #+#    #+#             */
/*   Updated: 2022/12/23 12:01:19 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int *convert_tab(char **tab)
{
	int i;
	int *tabint;

	i = 1;
	while(tab[i])
		i++;
	tabint = malloc(sizeof(int *) * i - 1);
	if (!tabint)
		return(ft_error_msg("ERROR : Malloc failed."));
	i = 0;
	while(*++tab)
	{
		tabint[i] = ft_atoi(*tab);
		i++;
	}
	return (tabint);
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

int main(int argc, char *argv[])
{
	t_list	*list_a;
	t_list	*list_b = NULL;
	t_list  **ptr_la;
	t_list	**ptr_lb;
	int		*tab_a;
	(void)argc;

	tab_a = convert_tab(argv);
	list_a = list_init(tab_a, 0);
	ptr_la = &list_a;
	ptr_lb = &list_b;
	ft_printlist(*ptr_la);
	swap(ptr_la, *ptr_la);
	printf("\n\n");
	ft_printlist(list_a);
	double_swap(ptr_la, &list_b);
	printf("\n\n");
	ft_printlist(list_a);
	rotate(ptr_la, *ptr_la);
	printf("\n\n");
	ft_printlist(list_a);
	double_rotate(ptr_la, &list_b);	
	printf("\n\n");
	ft_printlist(list_a);
	rotate_rev(ptr_la, *ptr_la);
	printf("\nAfter ROTATE_REV\n");
	ft_printlist(list_a);
	ft_lstlast(*ptr_la, 0);
	double_rotate_rev(ptr_la, &list_b);
	printf("\nAFTER DOUBLE ROTATE REV\n");
	ft_printlist(list_a);
	push_b(ptr_la, ptr_lb);
	push_b(ptr_la, ptr_lb);
	printf("\nLIST A\n");
	ft_printlist(list_a);
	printf("\nLIST B\n");
	ft_printlist(list_b);
	/*
	recuperer input
	check si formes string => si oui placer dans tableau
	checker si autre nombres (ft_isallnum(' '))
	sinon envoyer tab a init() => creer premiere list linked
	pour cela malloc chaque elem

	end :
	free lists + tabs
	*/
	return (0);
}