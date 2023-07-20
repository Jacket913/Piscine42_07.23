/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modulo_numbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:57:56 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 02:57:01 by xabaudhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "dict.h"

int	change_number(char *nb, char tab[4][3], int len_nb) // nb a free
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (len_nb <= 0 || len_nb > 12)
		return (0);
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			tab[i][j] = '\0';
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	while (len_nb > k)
	{
		while (len_nb > k  && i < 4)
		{
			j = 0;
			while (len_nb > k && j < 3)
			{
				tab[i][j] = nb[k];
				k++;
				j++;
			}
			i++;
		}
	}
	return (i);
}

void	print_number(char *nb, char **split)
{
	int		i;
	char	tab[4][3];
	int		len_nb;
	int		j;

	len_nb = ft_strlen(nb);
	change_number(nb, tab, len_nb);
	i = 0;
	while (i <=  4 && len_nb > 0)
	{
		j = 0;
		while (j <= 3 && len_nb > 0)
		{
			if (j == 0 && len_nb > 0)
			{	
				ft_strcmp_split_unit(split, tab[i][j], 0, 9);
				if (tab[i][j + 2] != '\0')
					print_split_hundred(split[28], len_nb, tab[i][j]);
				len_nb--;
			}
			if (j == 1 && len_nb > 0)
			{
				if (tab[i][j] == '1')
				{
					ft_strcmp_split_tens(split, tab[i][j - 1], 10, 19);
					j = 4;
				}
				if (tab[i][j] > '1'&& tab[i][j] <= '9')
				{
					ft_strcmp_split_unit(split, tab[i][j], 20, 27);
					len_nb--;
				}
			}
			if (j == 2 && len_nb > 0)
			{
				ft_strcmp_split_unit(split, tab[i][j], 0, 9);
				len_nb--;
			}
			j++;
			
		}
		if (len_nb > 9)
			print_split(split[31]);
		if (len_nb > 6)
			print_split(split[30]);
		if (len_nb > 3)
			print_split(split[29]);
		i++;
	}
	ft_putchar(127);
}*/
