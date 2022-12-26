/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:58:24 by achansar          #+#    #+#             */
/*   Updated: 2022/12/26 17:30:05 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"
 /*
 Probleme 1 : list_init_recursive fait galerer si 0.
				Trouver moyen de contourner.
 Probleme 2 : si - ou grands chiffres, trover comment afficher lists
				d'une façon claire.
 
 */


int main(int argc, char *argv[])
{
	t_stack		stack;
	t_tabint	tab;

	tab = get_arg(argc, argv);
	if (!tab.tab)
		return (1);
	ft_stack_init(&stack);
	printf("size tab = %d\n", tab.size);
	stack.list_a = list_init(tab.tab, 0, tab.size);
	free(tab.tab);

	get_index(stack.list_a);
	ft_printlist(stack.list_a, stack.list_b);

	ft_radix(&stack, tab.size);
	ft_printlist(stack.list_a, stack.list_b);
			/*
			Si 3 random numbers : 2 actions possible.
			Si 5 random numbers : moins de 12 actions autorisees.
			
			*/
/*
	end :
	free lists + tabs
	*/
	return (0);
}


// system("clear");
// upsleep(100000);
