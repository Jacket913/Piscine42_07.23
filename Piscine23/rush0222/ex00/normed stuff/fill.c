/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:19:54 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 16:35:05 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	ft_fill_units(char **split, char *trim)
{
	char	str[3];
	int		i;

	i = 0;
	str[0] = 48;
	str[1] = ':';
	str[2] = 0;
	while (str[0] <= 57 && i < 10)
	{
		split[i] = ft_strdup(ft_strstr(trim, str)); //MALLOC
		i++;
		str[0]++;
	}
}

void	ft_fill_twenty(char **split, char *trim)
{
	char	str[4];
	int		i;

	i = 10;
	str[0] = 49;
	str[1] = 48;
	str[2] = ':';
	str[3] = 0;
	while (str[1] <= 57 && i < 20)
	{
		split[i] = ft_strdup(ft_strstr(trim, str)); // MALLOC
		i++;
		str[1]++;
	}
}

void	ft_fill_tens(char **split, char *trim)
{
	char	str[4];
	int		i;

	i = 20;
	str[0] = 50;
	str[1] = 48;
	str[2] = ':';
	str[3] = 0;
	while (str[0] <= 57 && i < 28)
	{
		split[i] = ft_strdup(ft_strstr(trim, str)); // MALLOC
		i++;
		str[0]++;
	}
}

void	ft_fill_thousands(char **split, char *trim)
{
	split[28] = ft_strdup(ft_strstr(trim, "100:")); //MLLOC
	split[29] = ft_strdup(ft_strstr(trim, "1000:")); //MALLOC
	split[30] = ft_strdup(ft_strstr(trim, "1000000:"));//MALLOC
	split[31] = ft_strdup(ft_strstr(trim, "1000000000:"));//MALLOC 
							//PROTEC SI NO FIND
	split[32] = NULL;
}
