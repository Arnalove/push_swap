/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:46:32 by achansar          #+#    #+#             */
/*   Updated: 2023/01/18 18:30:24 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H
# include "../functions/libft.h"
# include <limits.h>
# define ARG_STR 1
# define ARG_TAB 2

//STRUCT
typedef struct s_stack {
	t_list	*list_a;
	t_list	*list_b;
}	t_stack;

typedef struct s_tabint {
	int	*tab;
	int	size;
}	t_tabint;

//OPERATIONS
void		swap(t_list **ptr, t_list *lst);
void		push_a(t_list **list_a, t_list **list_b);
void		push_b(t_list **list_a, t_list **list_b);
void		rotate(t_list **ptr, t_list *lst);
void		rotate_rev(t_list **ptr, t_list *lst);

//DISPLAY
void		*ft_error_msg(void *tab);

//UTILS
t_tabint	get_arg(int argc, char **argv);
void		ft_stack_init(t_stack *stack);
t_list		*list_init(int *tab, int i, int size);
int			ft_checker(t_list *lst_a, t_list *lst_b);
int			ft_define_size(t_stack *stack, int size);

//!!!!!!!!!!!!!!!!!!!!!!
void    ft_printlist(t_list *head_a, t_list *head_b);

#endif