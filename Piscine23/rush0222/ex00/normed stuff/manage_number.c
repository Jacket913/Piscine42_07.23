/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xabaudhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:57:25 by xabaudhu          #+#    #+#             */
/*   Updated: 2023/07/16 16:39:09 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	ft_number_hundred(char **split, char *nb, int len_nb)
{
	int	i;

	i = 0;
	if (nb[i] != '0')
	{
		ft_strcmp_split_unit(split, nb[i], 0, 9);
		print_split(split[28]);
	}
	i++;
	if (nb[i] != '0')
	{
		if (nb[i] == '1')
			ft_strcmp_split_tens(split, nb[i + 1], 10, 19);
		else if (nb[i] >= '2' && nb[i] <= '9')
			ft_strcmp_split_unit(split, nb[i], 20, 28);
	}
	i++;
	if (nb[i] != '0' && nb[i - 1] != '1')
		ft_strcmp_split_unit(split, nb[i], 0, 9);
}

void	ft_print_thousands(char **split, int len_nb)
{
	if (len_nb > 9)
		print_split(split[31]);
	if (len_nb > 6 && len_nb <= 9)
		print_split(split[30]);
	if (len_nb > 3 && len_nb <= 6)
		print_split(split[29]);
}

void	ft_number(char **split, char *nb)
{
	int	i;
	int	len_nb;

	i = 0;
	len_nb = ft_strlen(nb);
	while (len_nb > 0)
	{
		ft_number_hundred(split, &nb[i], len_nb);
		ft_print_thousands(split, len_nb);
		len_nb -= 3;
		i += 3;
	}
}
