/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:23:53 by achansar          #+#    #+#             */
/*   Updated: 2022/12/27 18:58:01 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int	ft_check_dupli(int **tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[0][i] == tab[0][j])
			{
				*tab = NULL;
				return ((int)ft_error_msg());
			}
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_arg_checker(int argc, char **argv)
{
	if (*argv[1])
	{
		if (argc == 2)
		{
			if (ft_isdigit(argv[1]) == 0)
				return (ARG_STR);
			else
				return ((int)ft_error_msg());
		}
		else
		{
			while (*++argv)
			{
				if (ft_isdigit(*argv) != 0)
					return ((int)ft_error_msg());
			}
			return (ARG_TAB);
		}
	}
	else
		return ((int)ft_error_msg());
	return (0);
}

static int	convert_tab(char **tab, t_tabint *ele)
{
	int		i;
	int		*tabint;
	long	temp;

	i = 1;
	while (tab[i])
		i++;
	ele->size = i - 1;
	tabint = malloc(sizeof(int *) * i - 1);
	if (!tabint)
		return ((int)ft_error_msg());
	i = 0;
	while (*++tab)
	{
		temp = ft_atoi(*tab);
		if (temp > INT_MAX || temp < INT_MIN)
			return ((int)ft_error_msg());
		tabint[i] = temp;
		i++;
	}
	ele->tab = tabint;
	return (1);
}

static int	convert_tab_split_edition(char *str, t_tabint *tab)
{
	int		i;
	int		*tabint;
	char	**tabchar;
	long	temp;

	i = 0;
	tabchar = ft_split(str, ' ');
	while (tabchar[i])
		i++;
	tab->size = i;
	tabint = malloc(sizeof(int *) * i);
	if (!tabint)
		return ((int)ft_error_msg());
	i = 0;
	while (tabchar[i])
	{
		temp = ft_atoi(tabchar[i]);
		if (temp > INT_MAX || temp < INT_MIN)
			return ((int)ft_error_msg());
		tabint[i] = temp;
		i++;
	}
	tab->tab = tabint;
	return (1);
}

t_tabint	get_arg(int argc, char **argv)
{
	t_tabint	tab;
	int			type;

	tab.tab = NULL;
	type = ft_arg_checker(argc, argv);
	if (type == ARG_TAB)
	{
		if(convert_tab(argv, &tab) == 0)
		{
			tab.tab = NULL;
			return (tab);
		}
	}
	else if (type == ARG_STR)
	{
		if(convert_tab_split_edition(argv[1], &tab) == 0)
		{
			tab.tab = NULL;
			return (tab);
		}
	}
	ft_check_dupli(&tab.tab, tab.size);
	// int i = tab.size;
	return (tab);
}
