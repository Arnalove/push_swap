/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:58:24 by achansar          #+#    #+#             */
/*   Updated: 2023/01/13 15:48:57 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"
 /*
 Probleme 1 : Quelques soucis sur petits nombres. Un ou deux cas sont problematiques seulement. Le tester passe entierement parfois
 Probleme 2 : free_all, leaks.
 Probleme 3 : 
 Probleme 4 :
 */

void *ft_error_msg(void)
{
	write(2, "Error\n", 6);
	return (NULL);
}

int main(int argc, char *argv[])
{
	t_stack		stack;
	t_tabint	tab;

	if (argc == 1)
		return (0);
	tab = get_arg(argc, argv);
	if (!tab.tab)
		return (0);
	ft_stack_init(&stack);
	
	stack.list_a = list_init(tab.tab, 0, tab.size);
	// ft_printlist(stack.list_a, stack.list_b);
	
	// ft_printlist(stack.list_a, stack.list_b);
	get_index(stack.list_a);
	// ft_printlist(stack.list_a, stack.list_b);
	ft_define_size(&stack, tab.size);
	// ft_printlist(stack.list_a, stack.list_b);
	// printf("Elements = %d\n", tab.size);
	
	ft_lstclear(&stack.list_a);
	free(tab.tab);
	return (0);
}
