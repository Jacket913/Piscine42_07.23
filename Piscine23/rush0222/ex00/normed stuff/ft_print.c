/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 00:13:44 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 05:44:50 by xabaudhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	print_split(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
		i++;
	i++;
	while (str[i] && str[i] != 10)
	{
		write(1, &str[i], 1);
		i++;
	}
	ft_putchar(32);
}

void	free_split(char **split, int n, char *nb)
{
	int	i;

	i = 0;
	if (split)
	{
		while (split[i] && i < n)
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
	if (nb)
		free(nb);
}

int	check_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	if (i < 32)
		return (0);
	return (i);
}
