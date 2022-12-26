/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:30:33 by achansar          #+#    #+#             */
/*   Updated: 2022/12/26 17:41:57 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void    ft_printlist(t_list *head_a, t_list *head_b)
{
	t_list *current_a;

	(void)head_b;
	current_a = head_a;
	//system("clear");
	ft_printf("+---------+---------+\n");
	ft_printf("| STACK A | STACK B |\n");
	ft_printf("+---------+---------+\n");
	while (current_a)
	{
		if (current_a)
		{
			ft_printf("  %d\n", *current_a->val);
			current_a = current_a->next;
		}
	}
	ft_printf("+---------+---------+\n\n");
	//sleep(10);
}

void *ft_error_msg(char *str)
{
	printf("%s\n\n", str);
	return (NULL);
}
