/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:23:53 by achansar          #+#    #+#             */
/*   Updated: 2022/12/25 20:25:53 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static int ft_arg_checker(int argc, char **argv)
{
	//printf("argc = %d\n", argc);
	if (argc > 1 && argv[1])//            => soucis avec chaine vide. Impossible d'avoir le else
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

static int *convert_tab(char **tab)
{
	int i;
	int *tabint;

	i = 1;
	while(tab[i])
		i++;
	tabint = malloc(sizeof(int *) * i - 1);
	if (!tabint)
		return(ft_error_msg("ERROR : Malloc failed."));
	i = 0;
	while(*++tab)
	{
		tabint[i] = ft_atoi(*tab);
		i++;
	}
	return (tabint);
}

static int	*convert_tab_split_edition(char *str)
{
	int		i;
	int		*tabint;
	char	**tabchar;

	i = 0;
	tabchar = ft_split(str, ' ');
	while (tabchar[i])
		i++;
	tabint = malloc(sizeof(int *) * i);
	if (!tabint)
		return(ft_error_msg("ERROR : Malloc failed."));
	i = 0;
	while(tabchar[i])
	{
		tabint[i] = ft_atoi(tabchar[i]);
		i++;
	}
	return (tabint);
}

int	*get_arg(int argc, char **argv)
{
	int	*tab_a;
	int	type;

	tab_a = NULL;
	type = ft_arg_checker(argc, argv);
	if (type == ARG_TAB)
		tab_a = convert_tab(argv);
	else if (type == ARG_STR)
		tab_a = convert_tab_split_edition(argv[1]);
	return (tab_a);
}
