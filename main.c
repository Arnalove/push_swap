/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:58:24 by achansar          #+#    #+#             */
/*   Updated: 2022/12/25 20:29:19 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int main(int argc, char *argv[])
{
	t_pushswap	stack;
	int			*tab_a;

	tab_a = get_arg(argc, argv);
	if (!tab_a)
		return (1);
	ft_stack_init(&stack);
	stack.list_a = list_init(tab_a, 0);
	free(tab_a);
	stack.ptr_la = &stack.list_a;
	stack.ptr_lb = &stack.list_b;


	ft_printlist(*stack.ptr_la);
	swap(stack.ptr_la, *stack.ptr_la);
	printf("\n\n");
	ft_printlist(stack.list_a);
	double_swap(stack.ptr_la, &stack.list_b);
	printf("\n\n");
	ft_printlist(stack.list_a);
	rotate(stack.ptr_la, *stack.ptr_la);
	printf("\n\n");
	ft_printlist(stack.list_a);
	double_rotate(stack.ptr_la, &stack.list_b);	
	printf("\n\n");
	ft_printlist(stack.list_a);
	rotate_rev(stack.ptr_la, *stack.ptr_la);
	printf("\nAfter ROTATE_REV\n");
	ft_printlist(stack.list_a);
	ft_lstlast(*stack.ptr_la, 0);
	double_rotate_rev(stack.ptr_la, &stack.list_b);
	printf("\nAFTER DOUBLE ROTATE REV\n");
	ft_printlist(stack.list_a);
	push_b(stack.ptr_la, stack.ptr_lb);
	push_b(stack.ptr_la, stack.ptr_lb);
	printf("\nLIST A\n");
	ft_printlist(stack.list_a);
	printf("\nLIST B\n");
	ft_printlist(stack.list_b);

	push_a(stack.ptr_la, stack.ptr_lb);
	push_a(stack.ptr_la, stack.ptr_lb);
	printf("\nLIST A\n");
	ft_printlist(stack.list_a);
	printf("\nLIST B\n");
	ft_printlist(stack.list_b);
	push_a(stack.ptr_la, stack.ptr_lb);
	/*



	creer checker sur mm focntionnement que printlist
		if ft_checker == 0 : stop prog
	end :
	free lists + tabs
	*/
	return (0);
}
