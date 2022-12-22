/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:30:33 by achansar          #+#    #+#             */
/*   Updated: 2022/12/22 17:32:09 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void    ft_printlist(t_list *head)
{
	t_list *current;

	current = head;
	while (current)
	{
		printf("value = %d\n", *current->val);
		current = current->next;
	}
}

void *ft_error_msg(char *str)
{
	printf("%s\n", str);
	return (NULL);
}
