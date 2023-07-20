/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:47:20 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/17 19:01:55 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb < 0)
		return (0);
	while (i * i < nb + 1)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d", ft_sqrt(9));
}*/
