/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:30:33 by achansar          #+#    #+#             */
/*   Updated: 2022/12/27 17:22:40 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void    ft_printlist(t_list *head_a, t_list *head_b)
{
	t_list *current_a;
	t_list *current_b;

	(void)head_b;
	current_a = head_a;
	current_b = head_b;
	ft_printf("+-------+\n");
	ft_printf("| STACK |\n");
	ft_printf("+-------+\n");
	while (current_a)
	{
		if (current_a)
		{
			ft_printf("%d  |   ", *current_a->val);
			current_a = current_a->next;
		}
		if (current_b)
		{
			ft_printf("%d", *current_b->val);
			current_b = current_b->next;
		}
		printf("\n");
	}
	ft_printf("+-------+\n\n");
}

void *ft_error_msg(void)
{
	write(2, "Error\n", 6);
	return (NULL);
}
