/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:23:53 by achansar          #+#    #+#             */
/*   Updated: 2022/12/26 16:17:41 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int ft_arg_checker(int argc, char **argv)
{
	if (argc > 1 && *argv[1])
	{
		if (argc == 2)
		{
			if (ft_isdigit(argv[1]) == 0)
				return (ARG_STR);
			else
				return((int)ft_error_msg("Error : Only numbers needed."));
		}
		else
		{
			while(*++argv)
			{
				if (ft_isdigit(*argv) != 0)
					return((int)ft_error_msg("Error : Only numbers needed."));
			}
			return (ARG_TAB);
		}
	}
	else
		return ((int)ft_error_msg("Error : Arguments missing."));
	return (0);
}

static int	convert_tab(char **tab, t_tabint *ele)
{
	int i;
	int *tabint;

	i = 1;
	while(tab[i])
		i++;
	ele->size = i - 1;
	tabint = malloc(sizeof(int *) * i - 1);
	if (!tabint)
		return((int)ft_error_msg("ERROR : Malloc failed."));
	i = 0;
	while(*++tab)
	{
		tabint[i] = ft_atoi(*tab);
		i++;
	}
	ele->tab = tabint;
	return (0);
}

static int	convert_tab_split_edition(char *str, t_tabint *tab)
{
	int		i;
	int		*tabint;
	char	**tabchar;

	i = 0;
	tabchar = ft_split(str, ' ');
	while (tabchar[i])
		i++;
	tab->size = i;
	tabint = malloc(sizeof(int *) * i);
	if (!tabint)
		return((int)ft_error_msg("ERROR : Malloc failed."));
	i = 0;
	while(tabchar[i])
	{
		tabint[i] = ft_atoi(tabchar[i]);
		i++;
	}
	tab->tab = tabint;
	return (0);
}

t_tabint get_arg(int argc, char **argv)
{
	t_tabint tab;
	int	type;

	tab.tab = NULL;
	type = ft_arg_checker(argc, argv);
	if (type == ARG_TAB)
		convert_tab(argv, &tab);
	else if (type == ARG_STR)
		convert_tab_split_edition(argv[1], &tab);
	return (tab);
}
