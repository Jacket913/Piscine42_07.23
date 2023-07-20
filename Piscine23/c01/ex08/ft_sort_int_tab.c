/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:28:40 by gmoulin           #+#    #+#             */
/*   Updated: 2023/07/10 17:42:53 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

/*void	intswap(int *a, int *b)
{
	int	*first;
	int	*second;

	first = a;
	second = b;
	*first ^= *second;
	*second ^= *first;
	*first ^= *second;
}*/
void	intswap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 1;
	while (size != 0)
	{
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				intswap(&tab[i - 1], &tab[i]);
			}
			i++;
		}
		size--;
	}
}
/*
int main (void)
{
	int test[5] = {1, 5, 10, 6, 9};
	printf("%d %d %d %d %d\n", test[0], test[1], test[2], test[3], test[4]);
	ft_sort_int_tab(test, 5);
	printf("%d %d %d %d %d", test[0], test[1], test[2], test[3], test[4]);
}*/
