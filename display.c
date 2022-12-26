/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:30:33 by achansar          #+#    #+#             */
/*   Updated: 2022/12/26 16:17:06 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void    ft_printlist(t_list *head_a, t_list *head_b)
{
	t_list *current_a;
	t_list *current_b;

	current_a = head_a;
	current_b = head_b;
	ft_printf("---------\n");
	while (current_a || current_b)
	{
		if (current_a)
		{
			ft_printf("  %d |", *current_a->val);
			current_a = current_a->next;
		}
		else
			ft_printf("    |");
		if (current_b)
		{
			ft_printf("  %d |\n", *current_b->val);
			current_b = current_b->next;
		}
		else
			ft_printf("    |\n");
	}
	ft_printf("---------\n  A   B\n\n");
}

void *ft_error_msg(char *str)
{
	printf("%s\n\n", str);
	return (NULL);
}
