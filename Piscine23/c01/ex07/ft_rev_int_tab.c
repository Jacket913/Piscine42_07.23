/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:36:43 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/10 01:11:32 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int main (void)
{
	int test[5] = {1, 5, 10, 6, 9};
	printf("%d %d %d %d %d\n", test[0], test[1], test[2], test[3], test[4]);
	ft_rev_int_tab(test, 5);
	printf("%d %d %d %d %d", test[0], test[1], test[2], test[3], test[4]);

}*/
