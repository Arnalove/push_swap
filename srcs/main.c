/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:58:24 by achansar          #+#    #+#             */
/*   Updated: 2023/01/13 16:19:30 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	get_index(t_list *head)
{
	int		i;
	t_list	*current;
	t_list	*compare;

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
		current = current->next;
	}
}

int	main(int argc, char *argv[])
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
	get_index(stack.list_a);
	ft_define_size(&stack, tab.size);
	ft_lstclear(&stack.list_a);
	free(tab.tab);
	return (0);
}
