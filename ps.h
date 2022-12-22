/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:46:32 by achansar          #+#    #+#             */
/*   Updated: 2022/12/22 18:06:21 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
#   define PS_H
#   include "../libft/libft.h"
#include <stdio.h>

//OPERATIONS
void    swap(t_list **ptr, t_list *lst);
void    double_swap(t_list **list_a, t_list **list_b);
void    rotate(t_list **ptr, t_list *lst);
void    double_rotate(t_list **list_a, t_list **list_b);
void	rotate_rev(t_list **ptr, t_list *lst);

//DISPLAY
void    ft_printlist(t_list *head);
void    *ft_error_msg(char *str);

#endif