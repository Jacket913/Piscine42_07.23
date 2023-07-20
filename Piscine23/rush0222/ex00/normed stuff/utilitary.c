/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:53:41 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 16:40:33 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcmp_split_unit(char **split, char c, int i, int j)
{
	while (i <= j)
	{
		if (split[i][0] == c)
			break ;
		i++;
	}
	if (c != 48)
		print_split(split[i]);
}

void	ft_strcmp_split_tens(char **split, char c, int i, int j)
{
	while (i <= j)
	{
		if (split[i][1] == c)
			break ;
		i++;
	}
	print_split(split[i]);
}	
