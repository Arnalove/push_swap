/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:46:32 by achansar          #+#    #+#             */
/*   Updated: 2022/12/25 20:24:53 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
#   define PS_H
#   include "../libft/libft.h"
#include <stdio.h>

#   define ARG_STR 1
#   define ARG_TAB 2

//STRUCT
typedef struct s_pushswap {
    t_list  *list_a;
    t_list  *list_b;
    t_list  **ptr_la;
    t_list  **ptr_lb;
}   t_pushswap;

//OPERATIONS
void    swap(t_list **ptr, t_list *lst);
void    double_swap(t_list **list_a, t_list **list_b);
void	push_a(t_list **list_a, t_list **list_b);
void    push_b(t_list **list_a, t_list **list_b);
void    rotate(t_list **ptr, t_list *lst);
void    double_rotate(t_list **list_a, t_list **list_b);
void	rotate_rev(t_list **ptr, t_list *lst);
void	double_rotate_rev(t_list **list_a, t_list **list_b);

//DISPLAY
void    ft_printlist(t_list *head);
void    *ft_error_msg(char *str);

//UTILS
int     *get_arg(int argc, char **argv);
void	ft_stack_init(t_pushswap *stack);
t_list  *list_init(int *tab, int i);

#endif